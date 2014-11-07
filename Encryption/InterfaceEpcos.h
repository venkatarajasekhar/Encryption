// autors:   	David Kahlbacher
// module:   	InterfaceEpcos.h
// function: 	abstract interface for client Epcos
// version:  	1.0
// date of creation:	04.11.2014
// date of last change:	04.11.2014

#ifndef INTERFACEEPCOS_H
#define INTERFACEEPCOS_H

#include <string>

class InterfaceEpcos{
public:
	virtual ~InterfaceEpcos() = default;
	virtual void decryptRSA(std::string const &_fileName) const = 0;
	virtual void encryptRSA(std::string const &_fileName) const = 0;
};

#endif