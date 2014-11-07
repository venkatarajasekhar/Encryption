// autors:   	David Kahlbacher
// module:   	EpcosAdapter.cpp
// function: 	implementation of EpcosAdapter methods
// version:  	1.1
// date of creation:	07.11.2014
// date of last change:	07.11.2014

#include "EpcosAdapter.h"
#include "RSA.h"

/*
	Method
	name: decryptRSA
	function: decrypt file with RSA
	parameters: _fileName: for example: Name.txt
	return: void
*/
void EpcosAdapter::decryptRSA(std::string const &_fileName) const{
	if (_fileName.size() == 0){
		throw std::string("Error: Invalid filename!");
	}
	Encrypt *pEnc = new(RSA);
	std::string outfilename = modify(_fileName, "decrypted");
	pEnc->readFile(_fileName + ".RSA");
	pEnc->decrypt();
	pEnc->writeFile(outfilename);
	delete pEnc; pEnc = 0;
}

/*
	Method
	name: encryptRSA
	function: encrypt file with RSA
	parameters: _fileName: for example: Name.txt
	return: void
*/
void EpcosAdapter::encryptRSA(std::string const &_fileName) const{
	if (_fileName.size() == 0){
		throw std::string("Error: Invalid filename!");
	}
	Encrypt *pEnc = new(RSA);
	pEnc->readFile(_fileName);
	pEnc->encrypt();
	pEnc->writeFile(_fileName+".RSA");
	delete pEnc; pEnc = 0;
}

/*
	private Method
	name: modify
	function: modifys the _fileName with _insertText at the end of file (before file ending)
	parameters: _fileName: it is the fileName that should be extended
				_insertText: the text which should be written to _fileName
	return: std::string: modified outputfile names
*/
std::string EpcosAdapter::modify(std::string const &_fileName, std::string const &_insertText) const{
	int i = _fileName.size();
	std::string outfilename = _fileName;
	while ((--i >= 0) && (_fileName[i] != '.'));
	if (i < 0) outfilename += _insertText;
	else outfilename.insert(i, _insertText);
	return outfilename;
}
