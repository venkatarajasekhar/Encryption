// autors:   	Matthias Hochmeister
// module:   	RSA.h
// function: 	
// version:  	1.0
// date of creation:	06.11.2014
// date of last change:	06.11.2014

#ifndef RSA_H
#define RSA_H

#include <cmath>
#include "Encrypt.h"

const unsigned int RSA_N = 187;
const unsigned int RSA_E = 7;
const unsigned int RSA_D = 23;

/*
	Class
	name: RSA
	function:
	inharitance: Encrypt
*/
class RSA : public Encrypt{
public:
	/*
		Method
		name: decrypt
		function: decrypt read data
		parameters: void
		return: void
	*/
	void decrypt();

	/*
		Method
		name: encrypt
		function: encrypt read data
		parameters: void
		return: void
	*/
	void encrypt();
};



#endif