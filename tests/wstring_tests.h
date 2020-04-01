/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#ifndef WSTRINGTESTS_H
#define WSTRINGTESTS_H

#include <gtest/gtest.h>

#include "wstring.h"

TEST(TestWString, TestHello)
{
  wksp::String str;
  EXPECT_STREQ("", str.cstr());
}

TEST(TestWString, TestHelloOmid)
{
  wksp::String *strPtr = new wksp::String("Hello Omid!");
  EXPECT_STREQ("Hello Omid!", strPtr->cstr());
}

TEST(TestWString, GetMyName)
{
  wksp::String str("madoodia");
  wksp::String strName(str.name());

  EXPECT_STREQ("madoodia", strName.cstr());
}

TEST(TestWString, AssignmentOperatorTest1)
{
  // Explicit call
  wksp::String str = wksp::String("madoodia"); // or wksp::String str("madoodia");
  str = "hello";                               // str.operator=("hello");

  EXPECT_STREQ("hello", str.name());
}

TEST(TestWString, AssignmentOperatorTest2)
{
  wksp::String person1("madoodia");
  wksp::String person2("omid");

  person1 = person2;

  EXPECT_STREQ("omid", person1.cstr());
  EXPECT_STREQ("omid", person2.cstr());
}

TEST(TestWString, CopyConstructor)
{
  wksp::String person1("madoodia");
  wksp::String person2(person1);

  EXPECT_STREQ("madoodia", person1.cstr());
  EXPECT_STREQ("madoodia", person2.cstr());
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
