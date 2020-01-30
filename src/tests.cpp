/* madoodia@gmail.com
(C) 2019
------------------ */


#include <gtest/gtest.h>

#include "WString.h"

TEST(TestWString, TestHello) 
{
	WString str;
	EXPECT_STREQ("", str.cstr());
}


TEST(TestWString, TestHelloOmid) 
{
	WString *strPtr = new WString("Hello Omid!");
	EXPECT_STREQ("Hello Omid!", strPtr->cstr());
}


TEST(TestWString, GetMyName) 
{
	WString str("madoodia");
	WString strName(str.name());
	
	EXPECT_STREQ("madoodia", strName.cstr());
}


TEST(TestWString, AssignmentOperatorTest1) 
{
	// Explicit call
	WString str = WString("madoodia"); // or WString str("madoodia");
	str = "hello"; // str.operator=("hello");

	EXPECT_STREQ("hello", str.name());
}


TEST(TestWString, AssignmentOperatorTest2) 
{
	WString person1("madoodia");
	WString person2("omid");

	person1 = person2;

	EXPECT_STREQ("omid", person1.cstr());
	EXPECT_STREQ("omid", person2.cstr());
}


TEST(TestWString, CopyConstructor) 
{
	WString person1("madoodia");
	WString person2(person1);

	EXPECT_STREQ("madoodia", person1.cstr());
	EXPECT_STREQ("madoodia", person2.cstr());
}


//TEST(TestWString, AddTwoString1) 
//{
//	WString str("hi");
//
//	str += " omid"; // str = str + name
//	EXPECT_STREQ("hi omid", str.cstr());
//}


//TEST(TestWString, AddTwoString2) 
//{
//	WString hello("hi");
//	WString name("madoodia");
//
//	hello += name;
//	EXPECT_STREQ("hi madoodia", hello.cstr());
//}


//TEST(TestWString, AddTwoString3) 
//{
//	WString hello("hi");
//	WString name("madoodia");
//
//	WString newStr;
//	newStr = hello + name;
//	EXPECT_STREQ("hi madoodia", newStr.cstr());
//}