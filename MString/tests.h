/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#ifndef MSTRINGSTESTS_H
#define MSTRINGSTESTS_H

#include "mString.h"
#include "mapi.h"

// 1
TEST(TestMString, TestEmptyString)
{
  mapi::MString str;
  EXPECT_STREQ("", str.name());
}
// 2
TEST(TestMString, TestGetMyName)
{
  mapi::MString myName("madoodia");
  EXPECT_STREQ("madoodia", myName.name());
}
// 3
TEST(TestMString, TestGetMyNamePtr)
{
  mapi::MString *strPtr = new mapi::MString("madoodia");
  EXPECT_STREQ("madoodia", strPtr->name());
  delete strPtr;
}
// 4
TEST(TestMString, TestCopyConstructor)
{
  mapi::MString str1("madoodia");
  mapi::MString str2(str1);
  EXPECT_STREQ("madoodia", str2.name());
}
// 5
TEST(TestMString, TestNameFunction)
{
  mapi::MString str1("madoodia");
  EXPECT_STREQ("madoodia", str1.name());
}
// 6
TEST(TestMString, TestAssignmentOperator1)
{
  // Explicit call
  mapi::MString str; // or mapi::MString str("madoodia");
  str = "hello";     // str.operator=("hello");

  EXPECT_STREQ("hello", str.name());
}
// 7
TEST(TestMString, TestAssignmentOperator2)
{
  mapi::MString person1("madoodia");
  mapi::MString person2("omid");

  person1 = person2;

  std::this_thread::sleep_for(std::chrono::milliseconds(200));
  EXPECT_STREQ("omid", person1.name());
}
// 8
TEST(TestMString, TestSetName)
{
  mapi::MString str;

  str.setName("madoodia");
  EXPECT_STREQ("madoodia", str.name());
}
// 9
TEST(TestMString, TestAppend)
{
  mapi::MString str1("hi ");
  mapi::MString str2("bye!");

  str1.append(str2.name());
  EXPECT_STREQ("hi bye!", str1.name());
}
// 10
TEST(TestMString, TestAddTwoString)
{
  mapi::MString str("hi");

  str += " madoodia"; // str = str + name
  EXPECT_STREQ("hi madoodia", str.name());
}
// 11
TEST(TestMString, AddTwoString2)
{
  mapi::MString hello("hi");
  mapi::MString name(" madoodia");

  hello += name; // hello.operator+=(name)
  EXPECT_STREQ("hi madoodia", hello.name());
}
// 12
TEST(TestMString, AddTwoString3)
{
  mapi::MString hello("hi ");
  const char *name = "madoodia";

  mapi::MString result;
  result = hello + name;
  EXPECT_STREQ("hi madoodia", result.name());
}
// 13
TEST(TestMString, AddTwoString4)
{
  const char *hello = "hi ";
  mapi::MString name("madoodia");

  mapi::MString result;
  result = hello + name;
  EXPECT_STREQ("hi madoodia", result.name());
}
// 14
TEST(TestMString, AddTwoString5)
{
  mapi::MString hello("hi ");
  mapi::MString name("madoodia");

  mapi::MString result;
  result = hello + name;
  EXPECT_STREQ("hi madoodia", result.name());
}

#endif // MSTRINGSTESTS_H
