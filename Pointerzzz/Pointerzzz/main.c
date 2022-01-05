//
//  main.c
//  Pointerzzz
//
//  Created by Glenn Posadas on 1/5/22.
//

#include <stdio.h>
#define print printf

int main(int argc, const char * argv[]) {
  // insert code here...
  
  int x = 100, *myPointer = NULL; // defines pointer px.
  
  // myPointer <--- MEMORY ADDRESS - meaning wala dapat *.
  // *myPointer <---- VALUE - meaning kailangan my *.
  
  myPointer = &x; //<--- assign the memory address of X to memory address of myPointer.
  
  x = 101;
  
  printf("ADDRESS of X: %p\n", &x);
  printf("myPointer: %p\n", myPointer);
  
  printf("EQUAL ADDRESS? %s\n", &x == myPointer ? "YES" : "NO");
  
  printf("-------\n");
  
  printf("VALUE OF X IS: %d\n", x);
  printf("VALUE OF *myPointer IS: %d\n", *myPointer);
  
  printf("EQUAL VALUES? %s\n", x == *myPointer ? "YES" : "NO");
  
  return 0;
}
