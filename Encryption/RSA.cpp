// autors:   	Matthias Hochmeister
// module:   	RSA.cpp
// function: 	
// version:  	1.0
// date of creation:	06.11.2014
// date of last change:	06.11.2014

#include "RSA.h"

/*
	Method
	name: decrypt
	function: decrypt read data
	parameters: void
	return: void
*/
void RSA::decrypt() {
	// decrypt data
	for (unsigned char c : mRawData) {
		if (c > RSA_N) {
			throw std::string("Value out of bounds, can't be decrypted - RSA::decrypt()");
		}

		unsigned long long tmp = 1;
		for (unsigned int i = 0; i < RSA_D; ++i) {
			tmp *= c;
			tmp %= RSA_N;
		}

		// cast tmp to char... can't be bigger then 187 so it fitts into char
		mProcessedData.push_back((unsigned char)tmp);
	}

}

/*
	Method
	name: encrypt
	function: encrypt read data
	parameters: void
	return: void
*/
void RSA::encrypt() {
	// encrypt data
	for (unsigned char c : mRawData) {
		if (c > RSA_N) {
			throw std::string("Value out of bounds, can't be encrypted - RSA::encrypt()");
		}

		unsigned long long tmp = 1;
		for (unsigned int i = 0; i < RSA_E; ++i) {
			tmp *= c;
			tmp %= RSA_N;
		}

		// cast tmp to char... can't be bigger then 187 so it fitts into char
		mProcessedData.push_back((unsigned char)tmp);
	}

}