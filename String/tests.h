/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#ifndef MSTRINGSTESTS_H
#define MSTRINGSTESTS_H

#include "api.h"
#include "mString.h"

TEST(TestWString, TestEmptyString)
{
  mapi::String str;
  EXPECT_STREQ("", str.name());
}

#endif // MSTRINGSTESTS_H
