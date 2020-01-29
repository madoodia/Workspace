

#include <gtest/gtest.h>

#include "WString.h"


TEST(TestWString, TestHello) 
{
	WString str;
	EXPECT_STREQ("Hello", str.cstr());
}


TEST(TestWString2, TestHelloOmid) 
{
	WString *strPtr = new WString("Hello Omid!");
	EXPECT_STREQ("Hello Omid!", strPtr->cstr());
}
