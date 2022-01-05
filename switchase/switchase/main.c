//
//  main.c
//  switchase
//
//  Created by Glenn Posadas on 1/5/22.
//

#include <stdio.h>
/** using #if for nested comments  **/
#define   TRUE    1
#define   FALSE   0


int main() {
  printf("hello!");
  return 0;
}

//int main()
//{
//  int x=5;
//
//  printf("x = %d\n", x);
//
//#if FALSE        /**  everything until the matching #endif is commented  **/
//  x = 304;
//#endif
//
//  printf("x = %d\n", x);
//}
