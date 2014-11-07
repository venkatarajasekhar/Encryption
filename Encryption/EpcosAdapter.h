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
	class: EpcosAdapter
*/
class EpcosAdapter :public Object, public InterfaceEpcos{
public:
	void decryptRSA(std::string const &_fileName) const;
	void encryptRSA(std::string const &_fileName) const;
};

#endif