#include "NortelAdapter.h"
#include "Caesar.h"
#include "RSA.h"

/*
	Method
	name: decipher
	function: encrypt file with RSA or Caesar
	parameters: _codeType: eRSA or eCaesar for decryption type
				_fileName: for example: Name.txt
	return: void
*/
void NortelAdapter::decipher(TEncoding const &_codeType, std::string const &_fileName) const{
	if (_fileName.size() == 0){
		throw std::string("Error: Invalid filename!");
	}
	Encrypt *pEnc = nullptr;
	std::string tmpend = getEnd(pEnc,_codeType);
	pEnc->readFile(_fileName + tmpend);
	pEnc->decrypt();
	pEnc->writeFile(_fileName);
	delete pEnc; pEnc = nullptr;
}

/*
	Method
	name: encipher
	function: encrypt file with RSA or Caesar
	parameters: _codeType: eRSA or eCaesar for encryption type
				_fileName: for example: Name.txt
	return: void
*/
void NortelAdapter::encipher(TEncoding const &_codeType, std::string const &_fileName) const{
	if (_fileName.size() == 0){
		throw std::string("Error: Invalid filename!");
	}
	Encrypt *pEnc = nullptr;
	std::string tmpend = getEnd(pEnc,_codeType);
	pEnc->readFile(_fileName);
	pEnc->encrypt();
	pEnc->writeFile(_fileName + tmpend);
	delete pEnc; pEnc = nullptr;
}

/*
	private Method
	name: getEnd
	function: decides which encryption is selected.
	parameters: _pEnc: pointer to Encrypt type
				_codeType: eRSA or eCaesar for encryption type
	return: std::string: ending of the encrypted filename
*/
std::string NortelAdapter::getEnd(Encrypt* &_pEnc, TEncoding const &_codeType) const{
	std::string tmpend = "";
	switch (_codeType){
	// selecting RSA
	case eRSA:
		_pEnc = new(RSA);
		tmpend = ".RSA";
		break;
	// selecting Caesar
	case eCaesar:
		_pEnc = new(Caesar);
		tmpend = ".Caesar";
		break;
	// unknown value for _codeType
	default:
		throw std::string("Error: unknown error in selecting deciphercode!");
	}
	return tmpend;
}
