// autors:   	Matthias Hochmeister
// module:   	Encrypt.cpp
// function: 	
// version:  	1.0
// date of creation:	06.11.2014
// date of last change:	06.11.2014

#include "Encrypt.h"

/*
	Method
	name: readFile
	function: read file and save data temporary
	parameters: _fileName - name of the file to read from
	return: void
*/
void Encrypt::readFile(std::string _fileName) {
	// open file
	std::ifstream file;
	file.open(_fileName, std::ios::binary);

	// check if file is open
	if (!file.is_open()) {
		throw std::string("error in open file - Encrypt::readFile");
	}

	// read data out of file
	while (!file.eof()) {
		unsigned char tmp = file.get();
		mRawData.push_back(tmp);
	}
	// remove termination byte. it would add up on every read operation
	mRawData.resize(mRawData.size() - 1);

	// close file
	file.close();
}

/*
	Method
	name: writeFile
	function: write file with temporary data
	parameters: _fileName - name of the file to write to
	return: void
*/
void Encrypt::writeFile(std::string _fileName) {
	// open file
	std::ofstream file;
	file.open(_fileName, std::ios::binary);

	// check if file is open
	if (!file.is_open()) {
		throw std::string("error in open file - Encrypt::readFile");
	}

	// write processed data into file
	for (char c : mProcessedData) {
		file.put(c);
	}

	// close file
	file.close();

	// clear tmp data
	mProcessedData.clear();
	mRawData.clear();
}