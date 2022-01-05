//
//  main.c
//  Array-pointerSample
//
//  Created by Glenn Posadas on 1/5/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  // insert code here...
  
  int x[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  int *px;
  
  px = x;
  px++;
  px++;
  printf("%p\n", px);
  printf("\n\nvalue of index 0 from pointer: %d\n\n", *px);
  
  
  // *px <- value
  // px <- address
  return 0;
}
