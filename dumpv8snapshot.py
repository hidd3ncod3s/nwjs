#!/usr/bin/env python

import sys
import tempfile
import os
import socket
import struct

'''
Note: Writing a parser for v8 snapshot in python is not a right way at this time. Atleast it is going
to take lot of time in porting it. It may not work with future versions. This structure is based 
on the in-memory object structures.
'''

'''
evalNWBin()
	\nwjs12\src\content\nw\src\api\window_bindings.js
		\nwjs12\src\content\nw\src\api\window_bindings.cc
		..
		\nwjs12\src\v8\src\serialize.cc
		
Important functions in serialize/deserialize

SerializedCodeData::SerializedCodeData()
CodeSerializer class
Code class


  enum Kind {
    FUNCTION
	OPTIMIZED_FUNCTION
	STUB
	HANDLER
	BUILTIN
	REGEXP
	LOAD_IC
	KEYED_LOAD_IC
	CALL_IC
	STORE_IC
	KEYED_STORE_IC
	BINARY_OP_IC
	COMPARE_IC
	COMPARE_NIL_IC
	TO_BOOLEAN_IC
    NUMBER_OF_KINDS
  };
'''

payload= []
position= 0

def getFileasBA(pe_file):
	return bytearray(open(pe_file, "rb").read())
	
'''
  inline int GetInt() 
  {
    // This way of variable-length encoding integers does not suffer from branch
    // mispredictions.
    uint32_t answer = GetUnalignedInt();
    int bytes = (answer & 3) + 1;
    Advance(bytes);
    uint32_t mask = 0xffffffffu;
    mask >>= 32 - (bytes << 3);
    answer &= mask;
    answer >>= 2;
    return answer;
  }
'''
def GetInt():
	global payload, position
	answer= struct.unpack('I', payload[:4])[0]
	bytes= (answer & 3) + 1
	print "\t advance= 0x%x" % (bytes)
	payload= payload[bytes:]
	position= position + bytes
	mask= 0xffffffff >> (32 - (bytes << 3))
	answer= answer & mask
	answer= answer >> 2
	return answer

def ReadData():
	global payload, position
	while len(payload) > 0:
		#print(''.join('%02x '% x for x in payload[0:1]))
		code= struct.unpack('B', payload[0:1])[0]
		print "code= 0x%02x(%d) at position= %d" % (code, code, position)
		print "length of the payload= %d" % (len(payload))
		payload= payload[1:]
		position= position + 1
		
		if code in range(0, 7 + 1):
			next_int= GetInt()
			
			size= 0
			reserved_size= 0
			if next_int == 0:
				print "\t next_int= 0x%x" % (next_int)
				next_int= GetInt()
				
				size= next_int << 2
				reserved_size= size + 4
			else:
				size= next_int << 2
			
			print "\t next_int= 0x%x" % (next_int)
			print "\t size= 0x%x" % (size)
			print "\t reserved_size= 0x%x" % (reserved_size)
		elif code == 9:
			next_int= GetInt()
			print "\t unknownvalue_9= %d" % (next_int)
		elif code == 10:
			cache_index= GetInt()
		elif code == 11 or code == 75:
			skip= GetInt()
			reference_id= GetInt()
		elif code == 12:
			size= GetInt()
		elif code == 13 or code == 14:
			builtin_id= GetInt()
		elif code == 15:
			#knop
			continue
		elif code in range(16, 16 + 0 + 0 + 7 + 1):
			from_GetBackReferencedObject= GetInt()
		elif code in range(24, 24 + 0 + 0 + 7 + 1):
			skip = GetInt()
			from_GetBackReferencedObject= GetInt()
		elif code == 32:
			size= GetInt()
			print "\t size= 0x%x" % (size)
			payload= payload[size:]
			position= position + size
		elif code in range(32 + 1, 32 + 34):
			bytec= (code - 32) * 4
			print "Raw Object:"
			#print("\t" + ''.join('%02x '% x for x in payload[:bytec]))
			
			output= ""
			for x in payload[:bytec]:
				if x in range(65, 91):
					output += ('%02c ' % x)
				else:
					output += ('%02x ' % x)
			print "\t" + output		
			payload= payload[bytec:]
			position= position + bytec
		elif code == 79:
			space= struct.unpack('B', payload[0:1])[0]
			print "kNextChunk space= 0x%x(%d)" % (space, space)
			payload= payload[1:]
			position= position + 1
		elif code == 96:
			repeats = GetInt()
		elif code in range(97, 97 + 14 + 1): # plus 1 for range
			print "\t repeats= %d" % (code - 0x60)
		elif code in range(160, 160 + 16 + 12 + 3):
			print "\t root_id= %d" % (code & 0x1f)
		elif code in range(224, 224 + 16 + 12 + 3):
			print "\t root_id= %d" % (code & 0x1f)
			skiplen= GetInt()
		elif code in range(112, 112 + 4 + 3+ 1): # plus 1 for range
			print "\t Hot Object index= %d" % (code & 0x7)
		elif code in range(120, 120 + 4 + 3 + 1): # plus 1 for range
			skiplen= GetInt()
		elif code == (13 + 0 + 128 + 0) or code  == (13 + 64 + 128 + 0):
			builtin_id = GetInt()
		elif code in range(192 + 1, 192 + 7 + 1):
			skip = GetInt()
		elif code == (14 + 0 + 0 + 0) or code  == (14 + 0 + 128 + 0) or code == (14 + 64 + 128 + 0):
			index = GetInt()
		elif code in range (16 + 64 + 128 + 0, 16 + 64 + 128 + 7 + 1): # plus 1 for range
			GetInt()
		elif code in range (24 + 64 + 128 + 0, 24 + 64 + 128 + 7 + 1): # plus 1 for range
			skip= GetInt()
			from_GetBackReferencedObject= GetInt()
		elif code == 205:
			builtin_id = GetInt();
		elif code == 207:
			index= struct.unpack('B', payload[0:1])[0]
			print "kNativesStringResource index= 0x%x(%d)" % (index, index)
			payload= payload[1:]
			position= position + 1
		elif code == 143:
			print "Error"
			sys.exit(-1)
		else:
			print "\t Unknown code= %d" % (code)
			sys.exit(-1)

def dumpv8snapshot(file):
	global payload, position
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
	print "total_header_size= %d" % total_header_size
	
	'''
		From here onwards, we need to rewrite this function.
		void Deserializer::ReadData(Object** current, Object** limit, int source_space,Address current_object_address)
		in src/v8/src/serialize.cc
	'''
	payload= ba[total_header_size:total_header_size+kPayloadLengthOffset]
	print "Length of the payload= %d\n" % (len(payload))
	ReadData()
	
	
	
	
	

def usage(file):
	print('Usage: %s <v8_binfile>' % file)
	sys.exit(-1)

if __name__ == '__main__':
	if len(sys.argv) < 2 or not os.path.isfile(sys.argv[1]):
		usage(sys.argv[0])
	
	dumpv8snapshot(sys.argv[1])