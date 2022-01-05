//
//  main.c
//  SWAP-pointerz
//
//  Created by Glenn Posadas on 1/5/22.
//

#include <stdio.h>

// prototype --

// PASS BY VALUE!!! nagkakaroon ng COPY
void swapNumbers(int x, int y); // WON'T WORK!

// PASS BY REFERENCE!!!
void swapNumbersByRef(int *px, int *py); // WORKS!

int main(int argc, const char * argv[]) {
  
  int a = 1;
  int b = 2;
  
  printf("A ADDRESS: %p\n", &a);
  printf("B ADDRESS: %p\n", &b);
  
  //swapNumbers(a, b);
  swapNumbersByRef(&a, &b);
  
  printf("\n--- back to main function ---\n");
  printf("A: %d, B: %d\n", a, b);
  
  return 0;
}

// Definition
void swapNumbersByRef(int *px, int *py) {
  // myPointer <--- MEMORY ADDRESS - meaning wala dapat *.
  // *myPointer <---- VALUE - meaning kailangan my *.
  
  // a ---> temp
  // b ---> a
  // temp ---> b
  
  
  int tempValue = *px;
  *px = *py;
  *py = tempValue;
}

// Definition
void swapNumbers(int x, int y) {
  // a ---> temp
  // b ---> a
  // temp ---> b
  
//  printf("\n----\n");
//
//  printf("X ADDRESS: %p\n", &x);
//  printf("Y ADDRESS: %p\n", &y);
  
  int a = x, b = y, temp;
  
  temp = a;
  a = b;
  b = temp;
  
//  printf("\n-----\n");
//
//  printf("A is now %d, and B is now %d\n", a, b);
  
  // finally
  x = a;
  y = b;
}
