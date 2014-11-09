// autors:   	Matthias Hochmeister
// module:   	Encrypt.h
// function: 	
// version:  	1.0
// date of creation:	06.11.2014
// date of last change:	06.11.2014

#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include "Object.h"

/*
	Class
	name: Encrypt
	function: 
	inharitance: Object
*/
class Encrypt : public Object {
public:
	/*
		Method
		name: decrypt
		function: decrypt read data
		parameters: void
		return: void
	*/
	void virtual decrypt() = 0;

	/*
		Method
		name: encrypt
		function: encrypt read data
		parameters: void
		return: void
	*/
	void virtual encrypt() = 0;

	/*
		Method
		name: readFile
		function: read file and save data temporary
		parameters: _fileName - name of the file to read from
		return: void
	*/
	void readFile(std::string _fileName);

	/*
		Method
		name: writeFile
		function: write file with temporary data
		parameters: _fileName - name of the file to write to
		return: void
	*/
	void writeFile(std::string _fileName);

protected:
	// save data
	std::vector<unsigned char> mRawData;

	std::vector<unsigned char> mProcessedData;
};


#endif