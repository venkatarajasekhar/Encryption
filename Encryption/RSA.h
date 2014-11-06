// autors:   	Matthias Hochmeister
// module:   	RSA.h
// function: 	
// version:  	1.0
// date of creation:	06.11.2014
// date of last change:	06.11.2014

#ifndef RSA_H
#define RSA_H

#include "Encrypt.h"

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
	void decrypt() override;

	/*
		Method
		name: encrypt
		function: encrypt read data
		parameters: void
		return: void
	*/
	void encrypt() override;
};



#endif