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
	for (char c : mRawData) {
		unsigned int tmp = std::pow(c, RSA_D);
		tmp = tmp % RSA_N;
		tmp = tmp % RSA_N;
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
void RSA::encrypt() {
	// encrypt data
	for (char c : mRawData) {
		unsigned int tmp = std::pow(c, RSA_E);
		tmp = tmp % RSA_N;
		tmp = tmp % RSA_N;
		mProcessedData.push_back(tmp);
	}

}