/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#ifndef WSTRINGTESTS_H
#define WSTRINGTESTS_H

#include "api.h"
#include "wstring.h"

TEST(TestWString, TestEmptyString)
{
  wksp::String str;
  EXPECT_STREQ("", str.cstr());
}

TEST(TestWString, TestGetMyName)
{
  wksp::String myName("madoodia");
  EXPECT_STREQ("madoodia", myName.cstr());
}

TEST(TestWString, TestGetMyNamePtr)
{
  wksp::String *strPtr = new wksp::String("madoodia");
  EXPECT_STREQ("madoodia", strPtr->cstr());
  delete strPtr;
}

TEST(TestWString, TestCopyConstructor)
{
  wksp::String str1("madoodia");
  wksp::String str2(str1);
  EXPECT_STREQ("madoodia", str2.cstr());
}

TEST(TestWString, TestNameFunction)
{
  wksp::String str1("madoodia");
  EXPECT_STREQ("madoodia", str1.name());
}

TEST(TestWString, TestAssignmentOperator1)
{
  // Explicit call
  wksp::String str; // or wksp::String str("madoodia");
  str = "hello";    // str.operator=("hello");

  EXPECT_STREQ("hello", str.name());
}

TEST(TestWString, TestAssignmentOperator2)
{
  wksp::String person1("madoodia");
  wksp::String person2("omid");

  person1 = person2;

  EXPECT_STREQ("omid", person1.cstr());
}

// =======================================

//TEST(TestWString, AddTwoString1)
//{
//	wksp::String str("hi");
//
//	str += " omid"; // str = str + name
//	EXPECT_STREQ("hi omid", str.cstr());
//}

//TEST(TestWString, AddTwoString2)
//{
//	wksp::String hello("hi");
//	wksp::String name("madoodia");
//
//	hello += name;
//	EXPECT_STREQ("hi madoodia", hello.cstr());
//}

//TEST(TestWString, AddTwoString3)
//{
//	wksp::String hello("hi");
//	wksp::String name("madoodia");
//
//	wksp::String newStr;
//	newStr = hello + name;
//	EXPECT_STREQ("hi madoodia", newStr.cstr());
//}

#endif // WSTRINGTESTS_H
