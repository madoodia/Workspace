/* --------------------- */
/* (C) 2020 madoodia.com */
/* --------------------- */

// Entry Point
int main(int argc, char *argv[])
{

  // -----
  int data1 = 1;
  int data11 = 100;
  int unk1 = 10001;
  int *pData1 = &data1;
  int *p1 = &unk1;

  data1 = 10;
  pData1 = &data11;
  pData1 = p1;
  unk1 = 100001;
  *pData1 = 1000;

  // -----
  int data2 = 2;
  int data22 = 200;
  int unk2 = 20002;
  const int *pData2 = &data2;
  int *p2 = &unk2;

  data2 = 20;
  pData2 = &data22;
  pData2 = p2;
  unk2 = 200002;
  // *pData2 = 2000; // compile error
  // *p2 = 2000; // runtime error

  // -----
  int data3 = 3;
  int data33 = 300;
  int unk3 = 30003;
  int *const pData3 = &data3;
  int *p3 = &unk3;

  data3 = 30;
  // pData3 = &data33; // compile error
  // pData3 = p3; // compile error
  unk3 = 300003;
  *pData3 = 3000;
  *p3 = 3000;

  // -----
  int data4 = 4;
  int data44 = 400;
  int unk4 = 40004;
  const int *const pData4 = &data4;
  int *p4 = &unk4;

  data4 = 40;
  // pData4 = &data44; // compile error
  // pData4 = p4;      // compile error
  unk4 = 400004;
  // *pData4 = 4000;   // compile error
  *p4 = 4000;

  // -----
  int data5 = 5;
  int data55 = 500;
  int unk5 = 50005;
  int const *pData5 = &data5; // same as pData2
  int *p5 = &unk5;

  data5 = 50;
  pData5 = &data55;
  pData5 = p5;
  // *pData5 = 5000; // compile error
  unk5 = 500005;
  *p5 = 5000; // runtime error

  return 0;
}
