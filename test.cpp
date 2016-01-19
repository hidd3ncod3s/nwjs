void
Deserializer::ReadData(Object ** current, Object ** limit,
		       int source_space, 
Address current_object_address)
{
    
Isolate * const isolate = isolate_;
    
	// Write barrier support costs around 1% in startup time.  In fact 
	// there
	// are no new space objects in current boot snapshots, so it's not 
	// needed,
	// but that may change.
	bool write_barrier_needed = (current_object_address != 0 &&  source_space != NEW_SPACE &&  source_space != CELL_SPACE &&  source_space != PROPERTY_CELL_SPACE && source_space != CODE_SPACE &&  source_space != OLD_DATA_SPACE); 
    
	while (current < limit) {
		
		byte data = source_.Get();
		switch (data) {
				// This generates a case and a body for the new space
				// (which has to do extra
				// write barrier handling) and handles the other spaces
				// with 8 fall-through
				// cases and one body.

				// We generate 15 cases and bodies that process special
				// tags that combine
				// the raw data tag and the length into one byte.
		
			case 32 + 1:
			{
				byte *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 1 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 1 * kPointerSize);
				break;
			}
			case 32 + 2:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 2 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 2 * kPointerSize);
				break;
				}
			case 32 + 3:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 3 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 3 * kPointerSize);
				break;
				}
			case 32 + 4:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 4 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 4 * kPointerSize);
				break;
				}
			case 32 + 5:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 5 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 5 * kPointerSize);
				break;
				}
			case 32 + 6:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 6 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 6 * kPointerSize);
				break;
				}
			case 32 + 7:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 7 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 7 * kPointerSize);
				break;
				}
			case 32 + 8:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 8 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 8 * kPointerSize);
				break;
				}
			case 32 + 9:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 9 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 9 * kPointerSize);
				break;
				}
			case 32 + 10:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 10 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 10 * kPointerSize);
				break;
				}
			case 32 + 11:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 11 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 11 * kPointerSize);
				break;
				}
			case 32 + 12:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 12 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 12 * kPointerSize);
				break;
				}
			case 32 + 13:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 13 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 13 * kPointerSize);
				break;
				}
			case 32 + 14:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 14 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 14 * kPointerSize);
				break;
				}
			case 32 + 15:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 15 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 15 * kPointerSize);
				break;
				}
			case 32 + 16:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 16 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 16 * kPointerSize);
				break;
				}
			case 32 + 17:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 17 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 17 * kPointerSize);
				break;
				}
			case 32 + 18:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 18 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 18 * kPointerSize);
				break;
				}
			case 32 + 19:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 19 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 19 * kPointerSize);
				break;
				}
			case 32 + 20:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 20 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 20 * kPointerSize);
				break;
				}
			case 32 + 21:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 21 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 21 * kPointerSize);
				break;
				}
			case 32 + 22:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 22 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 22 * kPointerSize);
				break;
				}
			case 32 + 23:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 23 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 23 * kPointerSize);
				break;
				}
			case 32 + 24:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 24 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 24 * kPointerSize);
				break;
				}
			case 32 + 25:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 25 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 25 * kPointerSize);
				break;
				}
			case 32 + 26:{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 26 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 26 * kPointerSize);
				break;
				}
			case 32 + 27:
			{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 27 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 27 * kPointerSize);
				break;
			}
			case 32 + 28:
			{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 28 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 28 * kPointerSize);
				break;
			}
			case 32 + 29:
			{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 29 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 29 * kPointerSize);
				break;
			}
			case 32 + 30:
			{
				byte           *raw_data_out =
					reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, 30 * kPointerSize);
				current =
					reinterpret_cast <
					Object ** >(raw_data_out + 30 * kPointerSize);
				break;
			}
			case 32 + 31:
			{
					byte *raw_data_out = reinterpret_cast < byte * >(current);
					source_.CopyRaw(raw_data_out, 31 * kPointerSize);
					current = reinterpret_cast <Object ** >(raw_data_out + 31 * kPointerSize);
					break;
			}

			// Deserialize a chunk of raw data that doesn't have one
			// of the popular
			// lengths.
			case 32:{
				int            size = source_.GetInt();
				byte * raw_data_out = reinterpret_cast < byte * >(current);
				source_.CopyRaw(raw_data_out, size);
				break;
		}
			
		 
		case 160:
			case 160 + 1:
			case 160 + 2:
			case 160 + 3:
			case 160 + 4:
			case 160 + 4 + 1:
			case 160 + 4 + 2:
			case 160 + 4 + 3:
			case 160 + 8:
			case 160 + 8 + 1:
			case 160 + 8 + 2:
			case 160 + 8 + 3:
			case 160 + 12:
			case 160 + 12 + 1:
			case 160 + 12 + 2:
			case 160 + 12 + 3:
			
		case 160 + 16:
			case 160 + 16 + 1:
			case 160 + 16 + 2:
			case 160 + 16 + 3:
			case 160 + 16 + 4:
			case 160 + 16 + 4 + 1:
			case 160 + 16 + 4 + 2:
			case 160 + 16 + 4 + 3:
			case 160 + 16 + 8:
			case 160 + 16 + 8 + 1:
			case 160 + 16 + 8 + 2:
			case 160 + 16 + 8 + 3:
			case 160 + 16 + 12:
			case 160 + 16 + 12 + 1:
			case 160 + 16 + 12 + 2:
			case 160 + 16 + 12 + 3:
			{
				
				int root_id = RootArrayConstantFromByteCode(data);
						
				Object * object = isolate->heap()->roots_array_start()[root_id];
				do {
					if ((!(!isolate->heap()->InNewSpace(object)))) {
						V8_Fatal("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",1106, "CHECK(%s) failed",							 "!isolate->heap()->InNewSpace(object)");
					}
				} while (0);
				*current++ = object;
				break;
						
		}
			
		 
		case 224:
			case 224 + 1:
			case 224 + 2:
			case 224 + 3:
			case 224 + 4:
			case 224 + 4 + 1:
			case 224 + 4 + 2:
			case 224 + 4 + 3:
			case 224 + 8:
			case 224 + 8 + 1:
			case 224 + 8 + 2:
			case 224 + 8 + 3:
			case 224 + 12:
			case 224 + 12 + 1:
			case 224 + 12 + 2:
			case 224 + 12 + 3:
			
		case 224 + 16:
			case 224 + 16 + 1:
			case 224 + 16 + 2:
			case 224 + 16 + 3:
			case 224 + 16 + 4:
			case 224 + 16 + 4 + 1:
			case 224 + 16 + 4 + 2:
			case 224 + 16 + 4 + 3:
			case 224 + 16 + 8:
			case 224 + 16 + 8 + 1:
			case 224 + 16 + 8 + 2:
			case 224 + 16 + 8 + 3:
			case 224 + 16 + 12:
			case 224 + 16 + 12 + 1:
			case 224 + 16 + 12 + 2:
			case 224 + 16 + 12 + 3:{
				
		int            root_id =
					RootArrayConstantFromByteCode(data);
				
		int            skip = source_.GetInt();
				
		current =
					reinterpret_cast < Object ** >(
		reinterpret_cast <
								   intptr_t >
								   (current) + skip);
				
		Object * object =
					isolate->heap()->roots_array_start()[root_id];
				
				do {
					if ((!(!isolate->heap()->InNewSpace(object)))) {
					V8_Fatal
						("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
						 1118, "CHECK(%s) failed",
						 "!isolate->heap()->InNewSpace(object)");
					}
				} while (0);
				
		*current++ = object;
				
		break;
				
		}
			
		 
		case 96:{
				
		int            repeats = source_.GetInt();
				
		Object * object = current[-1];
				
				do {
					if ((!(!isolate->heap()->InNewSpace(object)))) {
					V8_Fatal
						("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
						 1126, "CHECK(%s) failed",
						 "!isolate->heap()->InNewSpace(object)");
					}
				} while (0);
				
		for (int i = 0; i < repeats; i++)
					current[i] = object;
				
		current += repeats;
				
		break;
				
		}
				
		 
		typedef      StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   ((kRootArrayNumberOfConstantEncodings ==
					 Heap::kOldSpaceRoots)) >) >
				__StaticAssertTypedef__1133;
				
		#line 1134 "e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc"
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   ((kMaxFixedRepeats == 15)) >) >
				__StaticAssertTypedef__1134;
			
		case 97:
			case 97 + 1:
			case 97 + 2:
			case 97 + 3:
			
		case 97 + 4:
			case 97 + 4 + 1:
			case 97 + 4 + 2:
			case 97 + 4 + 3:
			
		case 97 + 8:
			case 97 + 8 + 1:
			case 97 + 8 + 2:
			case 97 + 8 + 3:
			
		case 97 + 12:
			
		case 97 + 13:
			
		case 97 + 14:{
				
		int            repeats = RepeatsForCode(data);
				
		Object * object = current[-1];
				
				do {
					if ((!(!isolate->heap()->InNewSpace(object)))) {
					V8_Fatal
						("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
						 1143, "CHECK(%s) failed",
						 "!isolate->heap()->InNewSpace(object)");
					}
				} while (0);
				
		for (int i = 0; i < repeats; i++)
					current[i] = object;
				
		current += repeats;
				
		break;
				
		}
				
		 
				// Deserialize a new object and write a pointer to it to
				// the current
				// object.
			case 0: //0 + NEW_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((NEW_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1151; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					NEW_SPACE ==
					kAnyOldSpace ? (data & kSpaceMask) : NEW_SPACE;
				if (kNewObject == kNewObject && kPlain == kPlain
					&& kStartOfObject == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kNewObject == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kNewObject == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kNewObject == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kNewObject == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kNewObject == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kNewObject == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1151, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1151, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1151, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kNewObject == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1151, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kNewObject == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1151, "CHECK(%s) failed",
							 "kNewObject == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kStartOfObject == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1151, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			case 0 + 2: //OLD_DATA_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_DATA_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1151;
			case 0 + 1: //OLD_POINTER_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_POINTER_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1151;
			case 0 + 3: //CODE_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CODE_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1151;
			case 0 + 4: //MAP_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((MAP_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1151;
			case 0 + 5: //CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1151;
			case 0 + 6: //PROPERTY_CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((PROPERTY_CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1151;
			case 0 + 7: //LO_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1151;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((LO_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1151; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					kAnyOldSpace ==
					kAnyOldSpace ? (data & kSpaceMask) : kAnyOldSpace;
				if (kNewObject == kNewObject && kPlain == kPlain
					&& kStartOfObject == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kNewObject == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kNewObject == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kNewObject == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kNewObject == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kNewObject == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kNewObject == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1151, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1151, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1151, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kNewObject == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1151, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kNewObject == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1151, "CHECK(%s) failed",
							 "kNewObject == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kStartOfObject == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1151, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
				
				// Support for direct instruction pointers in functions.
				// It's an inner
				// pointer because it points at the entry point, not at
				// the start of the
				// code object.
			case 128 + 3:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1155;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1155;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1155;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CODE_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1155;
				
		 {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					CODE_SPACE ==
					kAnyOldSpace ? (data & kSpaceMask) : CODE_SPACE;
				if (kNewObject == kNewObject && kPlain == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kNewObject == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kNewObject == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kNewObject == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kNewObject == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kNewObject == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kNewObject == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1156, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1156, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1156, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kNewObject == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1156, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kNewObject == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1156, "CHECK(%s) failed",
							 "kNewObject == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1156, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
				
				// Deserialize a new code object and write a pointer to
				// its first
				// instruction to the current code object.
			case 192:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((NEW_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1159; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					NEW_SPACE ==
					kAnyOldSpace ? (data & kSpaceMask) : NEW_SPACE;
				if (kNewObject == kNewObject && kFromCode == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kNewObject == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kNewObject == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kNewObject == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kNewObject == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kNewObject == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kNewObject == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1159, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1159, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1159, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kNewObject == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1159, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kNewObject == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1159, "CHECK(%s) failed",
							 "kNewObject == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1159, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kFromCode == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			case 192 + 2:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_DATA_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1159;
			case 192 + 1:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_POINTER_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1159;
			case 192 + 3:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CODE_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1159;
			case 192 + 4:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((MAP_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1159;
			case 192 + 5:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1159;
			case 192 + 6:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((PROPERTY_CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1159;
			case 192 + 7:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kNewObject & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1159;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((LO_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1159; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					kAnyOldSpace ==
					kAnyOldSpace ? (data & kSpaceMask) : kAnyOldSpace;
				if (kNewObject == kNewObject && kFromCode == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kNewObject == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kNewObject == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kNewObject == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kNewObject == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kNewObject == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kNewObject == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1159, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1159, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1159, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kNewObject == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1159, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kNewObject == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1159, "CHECK(%s) failed",
							 "kNewObject == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1159, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kFromCode == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
				
				// Find a recently deserialized object using its offset
				// from the current
				// allocation point and write a pointer to it to the
				// current object.
			case kBackref + kPlain + kStartOfObject + NEW_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((NEW_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1162; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					NEW_SPACE ==
					kAnyOldSpace ? (data & kSpaceMask) : NEW_SPACE;
				if (kBackref == kNewObject && kPlain == kPlain
					&& kStartOfObject == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBackref == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBackref == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackref == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackref == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBackref == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBackref == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1162, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1162, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1162, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBackref == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1162, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBackref == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1162, "CHECK(%s) failed",
							 "kBackref == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kStartOfObject == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1162, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			case kBackref + kPlain + kStartOfObject + OLD_DATA_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_DATA_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1162;
			case kBackref + kPlain + kStartOfObject + OLD_POINTER_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_POINTER_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1162;
			case kBackref + kPlain + kStartOfObject + CODE_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CODE_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1162;
			case kBackref + kPlain + kStartOfObject + MAP_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((MAP_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1162;
			case kBackref + kPlain + kStartOfObject + CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1162;
			case kBackref + kPlain + kStartOfObject + PROPERTY_CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((PROPERTY_CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1162;
			case kBackref + kPlain + kStartOfObject + LO_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1162;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((LO_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1162; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					kAnyOldSpace ==
					kAnyOldSpace ? (data & kSpaceMask) : kAnyOldSpace;
				if (kBackref == kNewObject && kPlain == kPlain
					&& kStartOfObject == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBackref == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBackref == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackref == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackref == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBackref == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBackref == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1162, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1162, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1162, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBackref == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1162, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBackref == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1162, "CHECK(%s) failed",
							 "kBackref == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kStartOfObject == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1162, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			
		case kBackrefWithSkip + kPlain + kStartOfObject + NEW_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((NEW_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1163; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					NEW_SPACE ==
					kAnyOldSpace ? (data & kSpaceMask) : NEW_SPACE;
				if (kBackrefWithSkip == kNewObject && kPlain == kPlain
					&& kStartOfObject == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBackrefWithSkip == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBackrefWithSkip == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackrefWithSkip == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackrefWithSkip == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBackrefWithSkip == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBackrefWithSkip == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1163, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1163, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1163, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBackrefWithSkip == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1163, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBackrefWithSkip == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1163, "CHECK(%s) failed",
							 "kBackrefWithSkip == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kStartOfObject == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1163, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			case kBackrefWithSkip + kPlain + kStartOfObject + OLD_DATA_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_DATA_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1163;
			case kBackrefWithSkip + kPlain + kStartOfObject + OLD_POINTER_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_POINTER_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1163;
			case kBackrefWithSkip + kPlain + kStartOfObject + CODE_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CODE_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1163;
			case kBackrefWithSkip + kPlain + kStartOfObject + MAP_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((MAP_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1163;
			case kBackrefWithSkip + kPlain + kStartOfObject + CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1163;
			case kBackrefWithSkip + kPlain + kStartOfObject + PROPERTY_CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((PROPERTY_CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1163;
			case kBackrefWithSkip + kPlain + kStartOfObject + LO_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1163;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((LO_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1163; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					kAnyOldSpace ==
					kAnyOldSpace ? (data & kSpaceMask) : kAnyOldSpace;
				if (kBackrefWithSkip == kNewObject && kPlain == kPlain
					&& kStartOfObject == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBackrefWithSkip == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBackrefWithSkip == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackrefWithSkip == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackrefWithSkip == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBackrefWithSkip == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBackrefWithSkip == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1163, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1163, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1163, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBackrefWithSkip == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1163, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBackrefWithSkip == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1163, "CHECK(%s) failed",
							 "kBackrefWithSkip == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kStartOfObject == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1163, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
				
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		#line 1177 "e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc"
				// Find a recently deserialized code object using its
				// offset from the
				// current allocation point and write a pointer to its
				// first instruction
				// to the current code object or the instruction pointer
				// in a function
				// object.
			case kBackref + kFromCode + kInnerPointer + NEW_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((NEW_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1181; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					NEW_SPACE ==
					kAnyOldSpace ? (data & kSpaceMask) : NEW_SPACE;
				if (kBackref == kNewObject && kFromCode == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBackref == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBackref == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackref == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackref == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBackref == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBackref == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1181, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1181, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1181, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBackref == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1181, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBackref == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1181, "CHECK(%s) failed",
							 "kBackref == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1181, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kFromCode == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			case kBackref + kFromCode + kInnerPointer + OLD_DATA_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_DATA_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1181;
			case kBackref + kFromCode + kInnerPointer + OLD_POINTER_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_POINTER_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1181;
			case kBackref + kFromCode + kInnerPointer + CODE_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CODE_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1181;
			case kBackref + kFromCode + kInnerPointer + MAP_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((MAP_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1181;
			case kBackref + kFromCode + kInnerPointer + CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1181;
			case kBackref + kFromCode + kInnerPointer + PROPERTY_CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((PROPERTY_CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1181;
			case kBackref + kFromCode + kInnerPointer + LO_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1181;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((LO_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1181; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					kAnyOldSpace ==
					kAnyOldSpace ? (data & kSpaceMask) : kAnyOldSpace;
				if (kBackref == kNewObject && kFromCode == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBackref == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBackref == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackref == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackref == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBackref == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBackref == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1181, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1181, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1181, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBackref == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1181, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBackref == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1181, "CHECK(%s) failed",
							 "kBackref == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1181, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kFromCode == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			
		case kBackrefWithSkip + kFromCode + kInnerPointer + NEW_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((NEW_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1182; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					NEW_SPACE ==
					kAnyOldSpace ? (data & kSpaceMask) : NEW_SPACE;
				if (kBackrefWithSkip == kNewObject && kFromCode == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBackrefWithSkip == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBackrefWithSkip == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackrefWithSkip == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackrefWithSkip == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBackrefWithSkip == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBackrefWithSkip == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1182, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1182, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1182, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBackrefWithSkip == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1182, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBackrefWithSkip == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1182, "CHECK(%s) failed",
							 "kBackrefWithSkip == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1182, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kFromCode == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			case kBackrefWithSkip + kFromCode + kInnerPointer + OLD_DATA_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_DATA_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1182;
			case kBackrefWithSkip + kFromCode + kInnerPointer + OLD_POINTER_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_POINTER_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1182;
			case kBackrefWithSkip + kFromCode + kInnerPointer + CODE_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CODE_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1182;
			case kBackrefWithSkip + kFromCode + kInnerPointer + MAP_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((MAP_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1182;
			case kBackrefWithSkip + kFromCode + kInnerPointer + CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1182;
			case kBackrefWithSkip + kFromCode + kInnerPointer + PROPERTY_CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((PROPERTY_CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1182;
			case kBackrefWithSkip + kFromCode + kInnerPointer + LO_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1182;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((LO_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1182; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					kAnyOldSpace ==
					kAnyOldSpace ? (data & kSpaceMask) : kAnyOldSpace;
				if (kBackrefWithSkip == kNewObject && kFromCode == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBackrefWithSkip == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBackrefWithSkip == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackrefWithSkip == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackrefWithSkip == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBackrefWithSkip == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBackrefWithSkip == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1182, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1182, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1182, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBackrefWithSkip == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1182, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBackrefWithSkip == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1182, "CHECK(%s) failed",
							 "kBackrefWithSkip == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1182, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kFromCode == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			
		case kBackref + kPlain + kInnerPointer + NEW_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((NEW_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1183; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					NEW_SPACE ==
					kAnyOldSpace ? (data & kSpaceMask) : NEW_SPACE;
				if (kBackref == kNewObject && kPlain == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBackref == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBackref == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackref == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackref == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBackref == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBackref == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1183, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1183, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1183, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBackref == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1183, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBackref == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1183, "CHECK(%s) failed",
							 "kBackref == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1183, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			case kBackref + kPlain + kInnerPointer + OLD_DATA_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_DATA_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1183;
			case kBackref + kPlain + kInnerPointer + OLD_POINTER_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_POINTER_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1183;
			case kBackref + kPlain + kInnerPointer + CODE_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CODE_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1183;
			case kBackref + kPlain + kInnerPointer + MAP_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((MAP_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1183;
			case kBackref + kPlain + kInnerPointer + CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1183;
			case kBackref + kPlain + kInnerPointer + PROPERTY_CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((PROPERTY_CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1183;
			case kBackref + kPlain + kInnerPointer + LO_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackref & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1183;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((LO_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1183; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					kAnyOldSpace ==
					kAnyOldSpace ? (data & kSpaceMask) : kAnyOldSpace;
				if (kBackref == kNewObject && kPlain == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBackref == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBackref == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackref == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackref == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBackref == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBackref == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1183, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1183, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1183, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBackref == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1183, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBackref == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1183, "CHECK(%s) failed",
							 "kBackref == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1183, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			
		case kBackrefWithSkip + kPlain + kInnerPointer + NEW_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((NEW_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1184; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					NEW_SPACE ==
					kAnyOldSpace ? (data & kSpaceMask) : NEW_SPACE;
				if (kBackrefWithSkip == kNewObject && kPlain == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBackrefWithSkip == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBackrefWithSkip == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackrefWithSkip == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackrefWithSkip == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBackrefWithSkip == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBackrefWithSkip == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1184, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1184, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1184, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBackrefWithSkip == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1184, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBackrefWithSkip == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1184, "CHECK(%s) failed",
							 "kBackrefWithSkip == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1184, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			case kBackrefWithSkip + kPlain + kInnerPointer + OLD_DATA_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_DATA_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1184;
			case kBackrefWithSkip + kPlain + kInnerPointer + OLD_POINTER_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((OLD_POINTER_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1184;
			case kBackrefWithSkip + kPlain + kInnerPointer + CODE_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CODE_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1184;
			case kBackrefWithSkip + kPlain + kInnerPointer + MAP_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((MAP_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1184;
			case kBackrefWithSkip + kPlain + kInnerPointer + CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1184;
			case kBackrefWithSkip + kPlain + kInnerPointer + PROPERTY_CELL_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((PROPERTY_CELL_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1184;
			case kBackrefWithSkip + kPlain + kInnerPointer + LO_SPACE:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBackrefWithSkip & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1184;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((LO_SPACE & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1184; {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					kAnyOldSpace ==
					kAnyOldSpace ? (data & kSpaceMask) : kAnyOldSpace;
				if (kBackrefWithSkip == kNewObject && kPlain == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBackrefWithSkip == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBackrefWithSkip == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackrefWithSkip == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBackrefWithSkip == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBackrefWithSkip == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBackrefWithSkip == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1184, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1184, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1184, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBackrefWithSkip == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1184, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBackrefWithSkip == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1184, "CHECK(%s) failed",
							 "kBackrefWithSkip == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1184, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
				
				// Find an object in the roots array and write a pointer
				// to it to the
				// current object.
			case kRootArray + kPlain + kStartOfObject + 0:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kRootArray & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1187;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1187;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1187;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((0 & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1187;
				
		 {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					0 == kAnyOldSpace ? (data & kSpaceMask) : 0;
				if (kRootArray == kNewObject && kPlain == kPlain
					&& kStartOfObject == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kRootArray == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kRootArray == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kRootArray == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kRootArray == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kRootArray == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kRootArray == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1188, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1188, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1188, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kRootArray == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1188, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kRootArray == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1188, "CHECK(%s) failed",
							 "kRootArray == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kStartOfObject == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1188, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
				
		 
		 
		 
		 
		#line 1195 "e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc"
				// Find an object in the partial snapshots cache and write 
				// a pointer to it
				// to the current object.
			case kPartialSnapshotCache + kPlain + kStartOfObject + 0:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPartialSnapshotCache & ~kPointedToMask) ==
					 0)) >) > __StaticAssertTypedef__1197;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1197;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1197;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((0 & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1197;
				
		 {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					0 == kAnyOldSpace ? (data & kSpaceMask) : 0;
				if (kPartialSnapshotCache == kNewObject && kPlain == kPlain
					&& kStartOfObject == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kPartialSnapshotCache == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kPartialSnapshotCache == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kPartialSnapshotCache ==
						   kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kPartialSnapshotCache == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kPartialSnapshotCache == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kPartialSnapshotCache == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1201, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1201, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1201, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kPartialSnapshotCache == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1201, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!
						 (kPartialSnapshotCache ==
						  kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1201, "CHECK(%s) failed",
							 "kPartialSnapshotCache == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kStartOfObject == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1201, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
				
		#line 1202 "e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc"
				// Find an code entry in the partial snapshots cache and
				// write a pointer to it to the current object.
			case kPartialSnapshotCache + kPlain + kInnerPointer + 0:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPartialSnapshotCache & ~kPointedToMask) ==
					 0)) >) > __StaticAssertTypedef__1204;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1204;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1204;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((0 & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1204;
				
		 {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					0 == kAnyOldSpace ? (data & kSpaceMask) : 0;
				if (kPartialSnapshotCache == kNewObject && kPlain == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kPartialSnapshotCache == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kPartialSnapshotCache == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kPartialSnapshotCache ==
						   kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kPartialSnapshotCache == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kPartialSnapshotCache == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kPartialSnapshotCache == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1208, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1208, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1208, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kPartialSnapshotCache == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1208, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!
						 (kPartialSnapshotCache ==
						  kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1208, "CHECK(%s) failed",
							 "kPartialSnapshotCache == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1208, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
				
		#line 1209 "e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc"
				// Find an external reference and write a pointer to it to 
				// the current
				// object.
			case kExternalReference + kPlain + kStartOfObject + 0:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kExternalReference & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1211;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1211;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1211;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((0 & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1211;
				
		 {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					0 == kAnyOldSpace ? (data & kSpaceMask) : 0;
				if (kExternalReference == kNewObject && kPlain == kPlain
					&& kStartOfObject == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kExternalReference == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kExternalReference == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kExternalReference == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kExternalReference == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kExternalReference == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kExternalReference == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1215, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1215, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1215, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kExternalReference == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1215, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!
						 (kExternalReference ==
						  kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1215, "CHECK(%s) failed",
							 "kExternalReference == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kStartOfObject == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1215, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
				
		#line 1216 "e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc"
				// Find an external reference and write a pointer to it in 
				// the current
				// code object.
			case kExternalReference + kFromCode + kStartOfObject + 0:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kExternalReference & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1218;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1218;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1218;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((0 & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1218;
				
		 {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					0 == kAnyOldSpace ? (data & kSpaceMask) : 0;
				if (kExternalReference == kNewObject && kFromCode == kPlain
					&& kStartOfObject == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kExternalReference == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kExternalReference == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kExternalReference == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kExternalReference == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kExternalReference == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kExternalReference == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1222, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1222, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1222, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kExternalReference == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1222, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!
						 (kExternalReference ==
						  kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1222, "CHECK(%s) failed",
							 "kExternalReference == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kStartOfObject == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1222, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kFromCode == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
				
		#line 1223 "e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc"
				// Find a builtin and write a pointer to it to the current 
				// object.
			case kBuiltin + kPlain + kStartOfObject + 0:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBuiltin & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1224;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1224;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1224;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((0 & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1224;
				
		 {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					0 == kAnyOldSpace ? (data & kSpaceMask) : 0;
				if (kBuiltin == kNewObject && kPlain == kPlain
					&& kStartOfObject == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBuiltin == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBuiltin == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBuiltin == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBuiltin == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBuiltin == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBuiltin == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1225, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1225, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1225, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBuiltin == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1225, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBuiltin == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1225, "CHECK(%s) failed",
							 "kBuiltin == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kStartOfObject == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1225, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			
		case kBuiltin + kPlain + kInnerPointer + 0:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBuiltin & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1226;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1226;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1226;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((0 & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1226;
				
		 {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					0 == kAnyOldSpace ? (data & kSpaceMask) : 0;
				if (kBuiltin == kNewObject && kPlain == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBuiltin == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBuiltin == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBuiltin == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBuiltin == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBuiltin == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBuiltin == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1227, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1227, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1227, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBuiltin == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1227, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBuiltin == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1227, "CHECK(%s) failed",
							 "kBuiltin == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1227, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			
		case kBuiltin + kFromCode + kInnerPointer + 0:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kBuiltin & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1228;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1228;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1228;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((0 & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1228;
				
		 {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					0 == kAnyOldSpace ? (data & kSpaceMask) : 0;
				if (kBuiltin == kNewObject && kFromCode == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kBuiltin == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kBuiltin == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBuiltin == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kBuiltin == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kBuiltin == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kBuiltin == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1229, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1229, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1229, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kBuiltin == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1229, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!(kBuiltin == kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1229, "CHECK(%s) failed",
							 "kBuiltin == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1229, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kFromCode == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
				
				// Find an object in the attached references and write a
				// pointer to it to
				// the current object.
			case kAttachedReference + kPlain + kStartOfObject + 0:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kAttachedReference & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1232;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1232;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kStartOfObject & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1232;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((0 & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1232;
				
		 {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					0 == kAnyOldSpace ? (data & kSpaceMask) : 0;
				if (kAttachedReference == kNewObject && kPlain == kPlain
					&& kStartOfObject == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kAttachedReference == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kAttachedReference == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kAttachedReference == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kAttachedReference == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kAttachedReference == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kAttachedReference == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1233, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1233, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1233, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kAttachedReference == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1233, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!
						 (kAttachedReference ==
						  kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1233, "CHECK(%s) failed",
							 "kAttachedReference == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kStartOfObject == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1233, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			
		case kAttachedReference + kPlain + kInnerPointer + 0:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kAttachedReference & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1234;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kPlain & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1234;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1234;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((0 & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1234;
				
		 {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					0 == kAnyOldSpace ? (data & kSpaceMask) : 0;
				if (kAttachedReference == kNewObject && kPlain == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kAttachedReference == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kAttachedReference == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kAttachedReference == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kAttachedReference == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kAttachedReference == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kAttachedReference == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1235, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1235, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1235, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kAttachedReference == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1235, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!
						 (kAttachedReference ==
						  kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1235, "CHECK(%s) failed",
							 "kAttachedReference == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1235, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kPlain == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			
		case kAttachedReference + kFromCode + kInnerPointer + 0:
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kAttachedReference & ~kPointedToMask) == 0)) >) >
				__StaticAssertTypedef__1236;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kFromCode & ~kHowToCodeMask) == 0)) >) >
				__StaticAssertTypedef__1236;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((kInnerPointer & ~kWhereToPointMask) == 0)) >) >
				__StaticAssertTypedef__1236;
				typedef         StaticAssertionHelper <
				sizeof(StaticAssertion < static_cast < bool >
					   (((0 & ~kSpaceMask) == 0)) >) >
				__StaticAssertTypedef__1236;
				
		 {
				bool            emit_write_barrier = false;
				bool            current_was_incremented = false;
				int             space_number =
					0 == kAnyOldSpace ? (data & kSpaceMask) : 0;
				if (kAttachedReference == kNewObject && kFromCode == kPlain
					&& kInnerPointer == kStartOfObject) {
					ReadObject(space_number, current);
					emit_write_barrier = (space_number == NEW_SPACE);
				} else {
					Object         *new_object = 0;
					if (kAttachedReference == kNewObject) {
					ReadObject(space_number, &new_object);
					} else if (kAttachedReference == kRootArray) {
					int             root_id = source_.GetInt();
					new_object =
						isolate->heap()->roots_array_start()[root_id];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kAttachedReference == kPartialSnapshotCache) {
					int             cache_index = source_.GetInt();
					new_object =
						isolate->
						serialize_partial_snapshot_cache()
						[cache_index];
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else if (kAttachedReference == kExternalReference) {
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					int             reference_id = source_.GetInt();
					Address         address =
						external_reference_decoder_->
						Decode(reference_id);
					new_object =
						reinterpret_cast < Object * >(address);
					} else if (kAttachedReference == kBackref) {
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} else if (kAttachedReference == kBuiltin) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1237, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             builtin_id = source_.GetInt();
					do {
						if ((!((0) <= (builtin_id)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1237, "CHECK(%s) failed",
							 "(0) <= (builtin_id)");
						}
					} while (0);
					do {
						if ((!
						 ((builtin_id) <
						  (Builtins::builtin_count)))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1237, "CHECK(%s) failed",
							 "(builtin_id) < (Builtins::builtin_count)");
						}
					} while (0);
					Builtins::Name name =
						static_cast < Builtins::Name > (builtin_id);
					new_object = isolate->builtins()->builtin(name);
					emit_write_barrier = false;
					} else if (kAttachedReference == kAttachedReference) {
					do {
						if ((!(deserializing_user_code()))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1237, "CHECK(%s) failed",
							 "deserializing_user_code()");
						}
					} while (0);
					int             index = source_.GetInt();
					new_object = *attached_objects_->at(index);
					emit_write_barrier =
						isolate->heap()->InNewSpace(new_object);
					} else {
					do {
						if ((!
						 (kAttachedReference ==
						  kBackrefWithSkip))) {
						V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1237, "CHECK(%s) failed",
							 "kAttachedReference == kBackrefWithSkip");
						}
					} while (0);
					int             skip = source_.GetInt();
					current =
						reinterpret_cast <
						Object ** >(reinterpret_cast < Address >
							(current) + skip);
					emit_write_barrier = (space_number == NEW_SPACE);
					new_object =
						GetBackReferencedObject(data & kSpaceMask);
					} if (kInnerPointer == kInnerPointer) {
					if (space_number != CODE_SPACE
						|| new_object->IsCode()) {
						Code           *new_code_object =
						reinterpret_cast < Code * >(new_object);
						new_object =
						reinterpret_cast <
						Object *
						>(new_code_object->instruction_start());
					} else {
						do {
						if ((!(space_number == CODE_SPACE))) {
							V8_Fatal
							("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
							 1237, "CHECK(%s) failed",
							 "space_number == CODE_SPACE");
						}
						} while (0);
						Cell           *cell = Cell::cast(new_object);
						new_object =
						reinterpret_cast <
						Object * >(cell->ValueAddress());
					}
					}
					if (kFromCode == kFromCode) {
					Address         location_of_branch_data =
						reinterpret_cast < Address > (current);
					Assembler::
						deserialization_set_special_target_at
						(location_of_branch_data,
						 Code::cast(HeapObject::
							FromAddress
							(current_object_address)),
						 reinterpret_cast < Address > (new_object));
					location_of_branch_data +=
						Assembler::kSpecialTargetSize;
					current =
						reinterpret_cast <
						Object ** >(location_of_branch_data);
					current_was_incremented = true;
					} else {
					*current = new_object;
					}
				}
				if (emit_write_barrier && write_barrier_needed) {
					Address         current_address =
					reinterpret_cast < Address > (current);
					isolate->heap()->RecordWrite(current_object_address,
								 static_cast <
								 int >(current_address -
									   current_object_address));
				}
				if (!current_was_incremented) {
					current++;
				}
				break;
				}
			
		 
		 
		 
		 
		 
		case kSkip:{
				
		int            size = source_.GetInt();
				
		current =
					reinterpret_cast < Object ** >(
		reinterpret_cast <
								   intptr_t >
								   (current) + size);
				
		break;
				
		}
			
		 
		case kNativesStringResource:{
				
		int            index = source_.Get();
				
		Vector < const char >source_vector =
					Natives::GetScriptSource(index);
				
		NativesExternalStringResource * resource =
					
		new NativesExternalStringResource(isolate->
									   bootstrapper(),
									   
		source_vector.
									   start(),
									   
		source_vector.
									   length());
				
		*current++ = reinterpret_cast < Object * >(resource);
				
		break;
				
		}
			
		 
		case kNextChunk:{
				
		int            space = source_.Get();
				
				do {
					if ((!(space < kNumberOfPreallocatedSpaces))) {
					V8_Fatal
						("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
						 1263, "CHECK(%s) failed",
						 "space < kNumberOfPreallocatedSpaces");
					}
				} while (0);
				
		int            chunk_index = current_chunk_[space];
				
		const          Heap::Reservation & reservation =
					reservations_[space];
				
					// Make sure the current chunk is indeed exhausted.
					CheckEqualsHelper
					("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc", 1267,
					 "reservation[chunk_index].end",
					 reservation[chunk_index].end, "high_water_[space]",
					 high_water_[space]);
				
					// Move to next reserved chunk.
					chunk_index = ++current_chunk_[space];
				
				do {
					if ((!((chunk_index) < (reservation.length())))) {
					V8_Fatal
						("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
						 1270, "CHECK(%s) failed",
						 "(chunk_index) < (reservation.length())");
					}
				} while (0);
				
		high_water_[space] = reservation[chunk_index].start;
				
		break;
				
		}
			
		 
		case kHotObjectWithSkip:
			case kHotObjectWithSkip + 1:
			case kHotObjectWithSkip + 2:
			case kHotObjectWithSkip + 3:
			
		case kHotObjectWithSkip + 4:
			case kHotObjectWithSkip + 4 + 1:
			case kHotObjectWithSkip + 4 + 2:
			case kHotObjectWithSkip + 4 + 3:{
				
		int            skip = source_.GetInt();
				
		current =
					reinterpret_cast < Object ** >(
		reinterpret_cast <
								   Address >
								   (current) + skip);
				
					// Fall through.
			} 
		case kHotObject:
			case kHotObject + 1:
			case kHotObject + 2:
			case kHotObject + 3:
			
		case kHotObject + 4:
			case kHotObject + 4 + 1:
			case kHotObject + 4 + 2:
			case kHotObject + 4 + 3:{
				
		int            index = data & kHotObjectIndexMask;
				
		*current = hot_objects_.Get(index);
				
		if (write_barrier_needed
					 && isolate->heap()->InNewSpace(*current)) {
					
		Address current_address =
					reinterpret_cast < Address > (current);
					
		isolate->heap()->RecordWrite(
		current_object_address,
								  
		static_cast <
								  int >(current_address -
									current_object_address));
				
		}
				
		current++;
				
		break;
				
		}
			
		 
		case kSynchronize:{
				
					// If we get here then that indicates that you have a
					// mismatch between
					// the number of GC roots when serializing and
					// deserializing.
					V8_Fatal("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc",
						 1299, "unreachable code");
				
		}
			
		 
		default:
				
		V8_Fatal("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc", 1303,
					  "unreachable code");
			
		}
			
	}
    
CheckEqualsHelper("e:\\nw\\nwjs12\\src\\v8\\src\\serialize.cc", 1306,
		       "limit", limit, "current", current);

}

 
