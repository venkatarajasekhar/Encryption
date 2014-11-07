// autors:   	David Kahlbacher
// module:   	InterfaceNortel.h
// function: 	abstract interface for client Nortel
// version:  	1.0
// date of creation:	04.11.2014
// date of last change:	07.11.2014

#ifndef INTERFACENORTEL_H
#define INTERFACENORTEL_H

#include <string>

/*
	Enum
	name: TEncoding
*/
enum TEncoding{
	eCaesar,
	eRSA
};

/*
	Interface Class
	name: InterfaceNortel
	function:
	inharitance: none
*/
class InterfaceNortel{
public:
	/*
		Method
		name: decipher
		function: encrypt file with RSA or Caesar
		parameters: _codeType: eRSA or eCaesar for decryption type
					_fileName: for example: Name.txt
		return: void
	*/
	virtual void decipher(TEncoding const &_codeType, std::string const &_fileName) const = 0;

	/*
		Method
		name: encipher
		function: encrypt file with RSA or Caesar
		parameters: _codeType: eRSA or eCaesar for encryption type
					_fileName: for example: Name.txt
		return: void
	*/
	virtual void encipher(TEncoding const &_codeType, std::string const &_fileName) const = 0;

	/*
		Method
		name: dtor
		function: tells the dtor to be virtual
		parameters: void
		return: void
	*/
	virtual ~InterfaceNortel() = default;
};

#endif