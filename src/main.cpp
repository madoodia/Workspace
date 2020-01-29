/* madoodia@gmail.com
(C) 2019
------------------ */


#include <iostream>
#include <cstdio>

#include <gtest/gtest.h>

#include "WString.h"


void runTests(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
}

int main(int argc, char* argv[])
{
	// Google Tests
	runTests(argc, argv);

	printf("\n--------------------\n");

	// Manual Tests
	// as variable
	WString myStr = "Hello";
	std::cout << "myStr: " << myStr << std::endl;
	printf("myStr: %s\n", myStr.cstr());
	// as pointer
	WString *strPtr = new WString("Hello Omid!");
	std::cout << "Pointer: " << *strPtr << std::endl;

	delete strPtr;


	return 0;
}
