/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#include "api.h"
#include "mstrings_tests.h"

// Entry Point
int main(int argc, char *argv[])
{
  printf("Hello From main\n");

#if USE_GTEST
  ::testing::InitGoogleTest(&argc, argv);
  int testResult = RUN_ALL_TESTS();
#endif // USE_GTEST

  return 0;
}
