// autors:   	Matthias Hochmeister
// module:   	Caesar.h
// function: 	
// version:  	1.0
// date of creation:	06.11.2014
// date of last change:	06.11.2014

#ifndef CAESAR_H
#define CAESAR_H

#include <string>
#include <iostream>
#include "Encrypt.h"

const unsigned int KEY = 13;
const unsigned int FIELD_SIZE = 255;

/*
	Class
	name: Caesar
	function:
	inharitance: Encrypt
*/
class Caesar : public Encrypt{
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