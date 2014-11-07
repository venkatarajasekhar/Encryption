// autors:   	David Kahlbacher
// module:   	InterfaceEpcos.h
// function: 	abstract interface for client Epcos
// version:  	1.0
// date of creation:	04.11.2014
// date of last change:	04.11.2014

#ifndef INTERFACEEPCOS_H
#define INTERFACEEPCOS_H

#include <string>

/*
	Interface Class
	name: InterfaceEpcos
	function:
	inharitance: none
*/
class InterfaceEpcos{
public:
	
	/*
		Method
		name: decryptRSA
		function: decrypt file with RSA
		parameters: _fileName: for example: Name.txt
		return: void
	*/
	virtual void decryptRSA(std::string const &_fileName) const = 0;

	/*
		Method
		name: encryptRSA
		function: encrypt file with RSA
		parameters: _fileName: for example: Name.txt
		return: void
	*/
	virtual void encryptRSA(std::string const &_fileName) const = 0;

	/*
		Method
		name: dtor
		function: tells the dtor to be virtual
		parameters: void
		return: void
	*/
	virtual ~InterfaceEpcos() = default;
};

#endif