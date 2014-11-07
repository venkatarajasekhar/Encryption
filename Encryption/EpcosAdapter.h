// autors:   	David Kahlbacher
// module:   	EpcosAdapter.h
// function: 	Adapter for client Epcos
// version:  	1.0
// date of creation:	04.11.2014
// date of last change:	04.11.2014

#ifndef EPCOSADAPTER_H
#define EPCOSADAPTER_H

#include "Object.h"
#include "InterfaceEpcos.h"

/*
	Class
	name : EpcosAdapter
	function :
	inharitance : Object, InterfaceEpcos
*/
class EpcosAdapter :public Object, public InterfaceEpcos{
public:
	/*
		Method
		name: decryptRSA
		function: decrypt file with RSA
		parameters: _fileName: for example: Name.txt
		return: void
	*/
	void decryptRSA(std::string const &_fileName) const;

	/*
		Method
		name: encryptRSA
		function: encrypt file with RSA
		parameters: _fileName: for example: Name.txt
		return: void
	*/
	void encryptRSA(std::string const &_fileName) const;
};

#endif