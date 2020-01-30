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
	// googletests
	runTests(argc, argv);

	return 0;
}
