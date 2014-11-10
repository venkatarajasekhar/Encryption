// autors:   	Matthias Hochmeister
// module:   	Caesar.cpp
// function: 	
// version:  	1.0
// date of creation:	06.11.2014
// date of last change:	06.11.2014

#include "Caesar.h"

/*
	Method
	name: decrypt
	function: decrypt read data
	parameters: void
	return: void
*/
void Caesar::decrypt() {
	// decrypt char for char and save it inta a tmp variable
	for (char c : mRawData) {
		// throw exception for value out of bounds
		if (c > FIELD_SIZE) {
			throw std::string("Value out of bounds, can't be decrypted - Caesar::decrypt()");
		}
		// decrypt
		char tmp = (c - KEY) % FIELD_SIZE;
		mProcessedData.push_back(tmp);
	}
}

/*
	Method
	name: encrypt
	function: encrypt read data
	parameters: void
	return: void
*/
void Caesar::encrypt() {
	// encrypt char for char and save it into a tmp variable
	for (char c : mRawData) {
		// throw exception for value out of bounds
		if (c > FIELD_SIZE) {
			throw std::string("Value out of bounds, can't be encrypted - Caesar::encrypt()");
		}
		// encrypt
		char tmp = (c + KEY) % FIELD_SIZE;
		mProcessedData.push_back(tmp);
	}
}