// autors:   	David Kahlbacher
// module:   	NortelAdapter.h
// function: 	Adapter for client Nortel
// version:  	1.1
// date of creation:	04.11.2014
// date of last change:	07.11.2014

#ifndef NORTELADAPTER_H
#define NORTELADAPTER_H

#include "Object.h"
#include "InterfaceNortel.h"
#include "Caesar.h"
#include "RSA.h"

/*
	Class
	name: NortelAdapter
	function:
	inharitance: Object, InterfaceNortel
*/
class NortelAdapter : public Object, public InterfaceNortel{
public:
	/*
		Method
		name: decipher
		function: encrypt file with RSA or Caesar
		parameters: _codeType: eRSA or eCaesar for decryption type
					_fileName: for example: Name.txt
		return: void
	*/
	void decipher(TEncoding const &_codeType, std::string const &_fileName) const;

	/*
		Method
		name: encipher
		function: encrypt file with RSA or Caesar
		parameters: _codeType: eRSA or eCaesar for encryption type
					_fileName: for example: Name.txt
		return: void
	*/
	void encipher(TEncoding const &_codeType, std::string const &_fileName) const;
private:
	/*
		private Method
		name: getEnd
		function: decides which encryption is selected.
		parameters: _pEnc: pointer to Encrypt type
					_codeType: eRSA or eCaesar for encryption type
		return: std::string: ending of the encrypted filename
	*/
	std::string getEnd(Encrypt* &_pEnc, TEncoding const &_codeType) const;

	/*
		private Method
		name: modify
		function: modifys the _fileName with _insertText at the end of file (before file ending)
		parameters: _fileName: it is the fileName that should be extended
					_insertText: the text which should be written to _fileName
		return: std::string: modified outputfile name
	*/
	std::string modify(std::string const &_fileName, std::string const &_insertText) const;
};

#endif