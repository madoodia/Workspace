/* madoodia@gmail.com
(C) 2019
------------------ */

#ifndef WTESTS_H
#define WTESTS_H

#include <gtest/gtest.h>

#include "string.h"

// using namespace workspace;

TEST(TestWString, TestHello)
{
	String str;
	EXPECT_STREQ("", str.cstr());
}

TEST(TestWString, TestHelloOmid)
{
	String *strPtr = new String("Hello Omid!");
	EXPECT_STREQ("Hello Omid!", strPtr->cstr());
}

TEST(TestWString, GetMyName)
{
	String str("madoodia");
	String strName(str.name());

	EXPECT_STREQ("madoodia", strName.cstr());
}

TEST(TestWString, AssignmentOperatorTest1)
{
	// Explicit call
	String str = String("madoodia"); // or String str("madoodia");
	str = "hello";					 // str.operator=("hello");

	EXPECT_STREQ("hello", str.name());
}

TEST(TestWString, AssignmentOperatorTest2)
{
	String person1("madoodia");
	String person2("omid");

	person1 = person2;

	EXPECT_STREQ("omid", person1.cstr());
	EXPECT_STREQ("omid", person2.cstr());
}

TEST(TestWString, CopyConstructor)
{
	String person1("madoodia");
	String person2(person1);

	EXPECT_STREQ("madoodia", person1.cstr());
	EXPECT_STREQ("madoodia", person2.cstr());
}

//TEST(TestWString, AddTwoString1)
//{
//	String str("hi");
//
//	str += " omid"; // str = str + name
//	EXPECT_STREQ("hi omid", str.cstr());
//}

//TEST(TestWString, AddTwoString2)
//{
//	String hello("hi");
//	String name("madoodia");
//
//	hello += name;
//	EXPECT_STREQ("hi madoodia", hello.cstr());
//}

//TEST(TestWString, AddTwoString3)
//{
//	String hello("hi");
//	String name("madoodia");
//
//	String newStr;
//	newStr = hello + name;
//	EXPECT_STREQ("hi madoodia", newStr.cstr());
//}

#endif // WTESTS_H
