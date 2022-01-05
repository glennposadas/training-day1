//
//  main.c
//  Yo
//
//  Created by Glenn Posadas on 1/4/22.
//

#include <stdio.h>

int main()
{
  int x=10;
  float y;

  printf("(1)  %d\n", x);
  printf("(2)  %d\n", x*5);

  printf("(3)  x = ");
  printf("%d", x);
  printf("\n");                                      /**  same as (4)  **/

  printf("(4)  x = %d\n", x);                        /**  same as (3)  **/

  printf("input x: ");  scanf("%d", &x);       /**  prompts for input  **/
  printf("(5)  x = %d\n", x);
  
/**  can input several values of different types with one scanf command  **/
  printf("input x, y: ");  scanf("%d %f", &x, &y);
  printf("(6)  x = %d, y = %f\n", x, y);
}

