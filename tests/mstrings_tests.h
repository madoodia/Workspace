/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#ifndef MSTRINGSTESTS_H
#define MSTRINGSTESTS_H

#include "api.h"
#include "mstrings.h"

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

  std::this_thread::sleep_for(std::chrono::milliseconds(200));
  EXPECT_STREQ("omid", person1.cstr());
}

TEST(TestWString, TestSetName)
{
  wksp::String str;

  str.setName("madoodia");
  EXPECT_STREQ("madoodia", str.cstr());
}

TEST(TestWString, TestAppend)
{
  wksp::String str1("hi ");
  wksp::String str2("bye!");

  str1.append(str2.cstr());
  EXPECT_STREQ("hi bye!", str1.cstr());
}

// =======================================

TEST(TestWString, TestAddTwoString)
{
  wksp::String str("hi");

  str += " madoodia"; // str = str + name
  EXPECT_STREQ("hi madoodia", str.cstr());
}

TEST(TestWString, AddTwoString2)
{
  wksp::String hello("hi");
  wksp::String name(" madoodia");

  hello += name; // hello.operator+=(name)
  EXPECT_STREQ("hi madoodia", hello.cstr());
}

TEST(TestWString, AddTwoString3)
{
  wksp::String hello("hi ");
  const char *name = "madoodia";

  wksp::String result;
  result = hello + name;
  EXPECT_STREQ("hi madoodia", result.cstr());
}

TEST(TestWString, AddTwoString4)
{
  const char *hello = "hi ";
  wksp::String name("madoodia");

  wksp::String result;
  result = hello + name;
  EXPECT_STREQ("hi madoodia", result.cstr());
}

TEST(TestWString, AddTwoString5)
{
  wksp::String hello("hi ");
  wksp::String name("madoodia");

  wksp::String result;
  result = hello + name;
  EXPECT_STREQ("hi madoodia", result.cstr());
}

#endif // MSTRINGSTESTS_H
