/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#include "api.h"

// Tests
#if USE_GTEST
#include "wstring_tests.h"
int runAllTests(int argc, char *argv[])
{
  // googleteststest separated files
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
#else
int runAllTests(int argc, char *argv[])
{
  return 0;
}
#endif

// Entry Point
int main(int argc, char *argv[])
{
  printf("Hello\n");

  int testResult = runAllTests(argc, argv);

  return 0;
}
