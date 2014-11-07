#include <iostream>
#include "Caesar.h"
#include "RSA.h"

int main(void) {
	Caesar c;

	c.readFile("./test.txt");
	c.encrypt();
	c.writeFile("./test.txt.Caesar");
	c.readFile("./test.txt.Caesar");
	c.decrypt();
	c.writeFile("./test1.txt");
	
	c.readFile("./test2.txt");
	c.encrypt();
	c.writeFile("./test.txt.RSA");
	c.readFile("./test.txt.RSA");
	c.decrypt();
	c.writeFile("./test3.txt");

	return EXIT_SUCCESS;
}