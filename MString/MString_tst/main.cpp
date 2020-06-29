/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#include "MString_tst.h"
#include "mapi.h"

// Entry Point
int main(int argc, char *argv[])
{
#if USE_GTEST
  ::testing::InitGoogleTest(&argc, argv);
  int testResult = RUN_ALL_TESTS();
#endif // USE_GTEST

  // ---------------------------

  // ---------------------------

  return 0;
}
