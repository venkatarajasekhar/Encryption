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
	void decipher(TEncoding const &_codeType, std::string const &_fileName) const;
	void encipher(TEncoding const &_codeType, std::string const &_fileName) const;
private:
	std::string getEnd(Encrypt* &pEnc, TEncoding const &_codeType) const;
};

#endif