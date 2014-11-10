// autors:   	David Kahlbacher
// module:   	InterfaceNortel.h
// function: 	abstract interface for client Nortel
// version:  	1.0
// date of creation:	04.11.2014
// date of last change:	07.11.2014

#include <iostream>
#include "EpcosAdapter.h"
#include "NortelAdapter.h"
#include "Caesar.h"
#include "RSA.h"

int testblock(std::string const &_fileName);

int main(void) {
	// filedestination
	std::string const filedest = "../Files/";

	// Testcase 1: normal file
	std::cout << "Test1 normal file: ";
	std::cout << (testblock(filedest + "test1.txt") ? "Failure" : "Success") << std::endl << std::endl;

	// Testcase 2: non existing file
	std::cout << "Test2 non existing file: ";
	std::cout << (testblock(filedest + "t.txt") ? "Failure" : "Success") << std::endl << std::endl;

	// Testcase 3: empty filename
	std::cout << "Test3 empty filename: ";
	std::cout << (testblock("") ? "Failure" : "Success") << std::endl << std::endl;

	// Testcase 4: empty file
	std::cout << "Test4 empty file: ";
	std::cout << (testblock(filedest + "test2.txt") ? "Failure" : "Success") << std::endl << std::endl;

	// Testcase 5: another normal file with infalid symbols (הצü)
	std::cout << "Test5 normal file with invalid symbols: ";
	std::cout << (testblock(filedest + "test3.txt") ? "Failure" : "Success") << std::endl << std::endl;

	return EXIT_SUCCESS;
}

int testblock(std::string const &_fileName){
	try{
		EpcosAdapter ep;
		NortelAdapter no;
		
		ep.encryptRSA(_fileName);
		ep.decryptRSA(_fileName);
		no.encipher(eRSA, _fileName);
		no.encipher(eCaesar, _fileName);
		no.decipher(eRSA, _fileName);
		no.decipher(eCaesar, _fileName);
	}
	catch (std::string const &_error){
		std::cerr << _error << std::endl;
		return EXIT_FAILURE;
	}
	catch (std::bad_alloc const& _e) {
		std::cerr << "allocating storage failed: " << _e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch (...){
		std::cerr << "unknown error appeared" << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
