#include "EpcosAdapter.h"
#include "RSA.h"

void EpcosAdapter::decryptRSA(std::string const &_fileName) const{
	if (_fileName.size() == 0){
		throw std::string("Error: Invalid filename!");
	}
	Encrypt *pEnc = new(RSA);
	pEnc->readFile(_fileName+".RSA");
	pEnc->decrypt();
	pEnc->writeFile(_fileName);
	delete pEnc; pEnc = 0;
}

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