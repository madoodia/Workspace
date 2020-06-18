/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#ifndef MSTRINGSTESTS_H
#define MSTRINGSTESTS_H

#include "api.h"
#include "mString.h"

TEST(TestMString, TestEmptyString)
{
  mapi::MString str;
  EXPECT_STREQ("", str.name());
}

TEST(TestMString, TestGetMyName)
{
  mapi::MString myName("madoodia");
  EXPECT_STREQ("madoodia", myName.name());
}

TEST(TestMString, TestGetMyNamePtr)
{
  mapi::MString *strPtr = new mapi::MString("madoodia");
  EXPECT_STREQ("madoodia", strPtr->name());
  delete strPtr;
}

TEST(TestMString, TestCopyConstructor)
{
  mapi::MString str1("madoodia");
  mapi::MString str2(str1);
  EXPECT_STREQ("madoodia", str2.name());
}

TEST(TestMString, TestNameFunction)
{
  mapi::MString str1("madoodia");
  EXPECT_STREQ("madoodia", str1.name());
}

TEST(TestMString, TestAssignmentOperator1)
{
  // Explicit call
  mapi::MString str; // or mapi::MString str("madoodia");
  str = "hello";     // str.operator=("hello");

  EXPECT_STREQ("hello", str.name());
}

TEST(TestMString, TestAssignmentOperator2)
{
  mapi::MString person1("madoodia");
  mapi::MString person2("omid");

  person1 = person2;

  std::this_thread::sleep_for(std::chrono::milliseconds(200));
  EXPECT_STREQ("omid", person1.name());
}

TEST(TestMString, TestSetName)
{
  mapi::MString str;

  str.setName("madoodia");
  EXPECT_STREQ("madoodia", str.name());
}

TEST(TestMString, TestAppend)
{
  mapi::MString str1("hi ");
  mapi::MString str2("bye!");

  str1.append(str2.name());
  EXPECT_STREQ("hi bye!", str1.name());
}

TEST(TestMString, TestAddTwoString)
{
  mapi::MString str("hi");

  str += " madoodia"; // str = str + name
  EXPECT_STREQ("hi madoodia", str.name());
}

TEST(TestMString, AddTwoString2)
{
  mapi::MString hello("hi");
  mapi::MString name(" madoodia");

  hello += name; // hello.operator+=(name)
  EXPECT_STREQ("hi madoodia", hello.name());
}

TEST(TestMString, AddTwoString3)
{
  mapi::MString hello("hi ");
  const char *name = "madoodia";

  mapi::MString result;
  result = hello + name;
  EXPECT_STREQ("hi madoodia", result.name());
}

TEST(TestMString, AddTwoString4)
{
  const char *hello = "hi ";
  mapi::MString name("madoodia");

  mapi::MString result;
  result = hello + name;
  EXPECT_STREQ("hi madoodia", result.name());
}

TEST(TestMString, AddTwoString5)
{
  mapi::MString hello("hi ");
  mapi::MString name("madoodia");

  mapi::MString result;
  result = hello + name;
  EXPECT_STREQ("hi madoodia", result.name());
}

#endif // MSTRINGSTESTS_H
