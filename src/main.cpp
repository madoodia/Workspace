/* madoodia@gmail.com
(C) 2019
------------------ */


#include <iostream>
#include <cstdio>

#include "WString.h"


int main()
{
	WString myStr = "Hello";
	std::cout << "myStr: " << myStr << std::endl;
	printf("myStr: %s\n", myStr.cstr());

	// as pointer
	WString *strPtr = new WString("Hello Omid!");
	std::cout << "Pointer: " << *strPtr << std::endl;

	delete strPtr;

	return 0;
}
