/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

#include "api.h"
#include "mstrings_tests.h"

// Entry Point
int main(int argc, char *argv[])
{
  printf("Hello From main\n");

#if 0
  ::testing::InitGoogleTest(&argc, argv);
  int testResult = RUN_ALL_TESTS();
#endif // USE_GTEST

  int data1 = 1;
  int data2 = 2;
  int data3 = 3;
  int data4 = 4;
  int data5 = 5;

  int *pData1 = &data1;
  const int *pData2 = &data2;
  int *const pData3 = &data3;
  const int *const pData4 = &data4;
  int const *pData5 = &data5;

  return 0;
}
