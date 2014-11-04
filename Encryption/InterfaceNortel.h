// autors:   	David Kahlbacher
// module:   	InterfaceNortel.h
// function: 	abstract interface for client Nortel
// version:  	1.0
// date of creation:	04.11.2014
// date of last change:	04.11.2014

#ifndef INTERFACENORTEL_H
#define INTERFACENORTEL_H

#include <string>

enum TEncoding{
	Caesar,
	eRSA
};

class InterfaceNortel{
public:
	virtual ~InterfaceNortel() = default;
	virtual void decipher(std::string _fileName) = 0;
	virtual void encipher(std::string _fileName) = 0;
};

#endif