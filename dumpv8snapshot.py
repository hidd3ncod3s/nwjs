#!/usr/bin/env python

import sys
import tempfile
import os
import socket
import struct

def getFileasBA(pe_file):
	return bytearray(open(pe_file, "rb").read())

def dumpv8snapshot(file):
	ba = getFileasBA(file)
	kCheckSumOffset= struct.unpack('I', ba[0:4])[0]
	kNumInternalizedStringsOffset= struct.unpack('I', ba[1*4:2*4])[0]
	kReservationsOffset= struct.unpack('I', ba[2*4:3*4])[0]
	kNumCodeStubKeysOffset= struct.unpack('I', ba[3*4:4*4])[0]
	kPayloadLengthOffset= struct.unpack('I', ba[4*4:5*4])[0]
	
	fixed_header_size= 5 * 4
	
	print "kCheckSumOffset= 0x%x" % kCheckSumOffset
	
	print "kNumInternalizedStringsOffset= 0x%x" % kNumInternalizedStringsOffset
	
	print "kReservationsOffset= 0x%x" % kReservationsOffset
	for i in range(0,kReservationsOffset):
		reservation= struct.unpack('I', ba[fixed_header_size + i * 4:fixed_header_size+ (i+1) * 4])[0]
		print "\t Reservation[%d]= 0x%x(chunk_size= %d, last_chunk= %r)" % (i, reservation, reservation & 0x7fffffff, bool(reservation & 0x80000000))
	
	total_header_size= fixed_header_size + kReservationsOffset * 4
	
	print "kNumCodeStubKeysOffset= 0x%x" % kNumCodeStubKeysOffset
	for i in range(0,kNumCodeStubKeysOffset):
		key= struct.unpack('I', ba[total_header_size + i * 4:total_header_size+ (i+1) * 4])[0]
		print "\t CodeStubKey[%d]= 0x%x(0x%x)" % (i, key, key&0x7f)
		total_header_size= total_header_size + 4
	
	print "kPayloadLengthOffset= %d" % kPayloadLengthOffset
	#print "total_header_size= %d" % total_header_size
	
	'''
		From here onwards, we need to rewrite this function.
		void Deserializer::ReadData(Object** current, Object** limit, int source_space,Address current_object_address)
		in src/v8/src/serialize.cc
	'''
	payload= ba[total_header_size:total_header_size+kPayloadLengthOffset]
	while len(payload) > 0:
		#print(''.join('%02x '% x for x in payload[0:1]))
		code= struct.unpack('B', payload[0:1])[0]
		print "code= %d" % (code)
		payload= payload[1:]
		if code in range(32, 32+32):
			for i in range(0, code):
				print "\t Pointer= 0x%x" % (struct.unpack('I', payload[0:4])[0])
				payload= payload[4:]
		elif code in range(97, 97 + 14):
			print "repeats= %d" % (code - 0x60)
		elif code in range(160, 160 + 16 + 12 + 3):
			print "root_id= %d" % (code & 0x1f)
			payload= payload[1:]
			break
		elif code in range(224, 224 + 16 + 12 + 3):
			print "root_id= %d" % (code & 0x1f)
			payload= payload[1:]
			skiplen= struct.unpack('I', payload[0:4])[0]
			print "skip= %d" % (skiplen)
			payload= payload[skiplen:]
			break
		elif code == 96:
			repeats= struct.unpack('I', payload[0:4])[0]
			print "repeats= %d" % (repeats)
		else:
			print "Unknown code= %d" % (code)
			break;
	
	
	
	
	

def usage(file):
	print('Usage: %s <v8_binfile>' % file)
	sys.exit(-1)

if __name__ == '__main__':
	if len(sys.argv) < 2 or not os.path.isfile(sys.argv[1]):
		usage(sys.argv[0])
	
	dumpv8snapshot(sys.argv[1])