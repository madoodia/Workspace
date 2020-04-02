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

  // -----
  int data1 = 1;
  int data11 = 100;
  int unk1 = 10001;
  int *pData1 = &data1;
  int *p1 = &unk1;

  data1 = 10;
  pData1 = &data11;
  pData1 = p1;
  *pData1 = 1000;

  // -----
  int data2 = 2;
  const int *pData2 = &data2;
  data2 = 20;
  int *p2;
  int data22 = 200;
  pData2 = &data22;
  pData2 = p2;
  // *pData2 = 2000; // compile error
  // *p2 = 2000; // runtime error

  // -----
  int data3 = 3;
  int *const pData3 = &data3;
  data3 = 30;
  int *p3;
  int data33 = 300;
  // pData3 = &data33; // compile error
  // pData3 = p3;      // compile error
  *pData3 = 3000;
  *p3 = 3000;

  // -----
  int data4 = 4;
  const int *const pData4 = &data4;
  data4 = 40;
  int *p4;
  int data44 = 400;
  // pData4 = &data44; // compile error
  // pData4 = p4;      // compile error
  // *pData4 = 4000;   // compile error
  *p4 = 4000; // runtime error

  // -----
  int data5 = 5;
  int const *pData5 = &data5; // same as pData2
  data5 = 50;
  int *p5;
  int data55 = 500;
  pData5 = &data55;
  pData5 = p5;
  // *pData5 = 5000; // compile error
  *p5 = 5000; // runtime error

  return 0;
}
