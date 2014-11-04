// autors:   	David Kahlbacher
// module:   	NortelAdapter.h
// function: 	Adapter for client Nortel
// version:  	1.0
// date of creation:	04.11.2014
// date of last change:	04.11.2014

#ifndef NORTELADAPTER_H
#define NORTELADAPTER_H

#include "Object.h"
#include "InterfaceNortel.h"

class NortelAdapter : public Object, public InterfaceNortel{
public:
	void decipher(std::string const &_fileName, TEncoding const _codeType);
	void encipher(std::string const &_fileName, TEncoding const _codeType);
};

#endif