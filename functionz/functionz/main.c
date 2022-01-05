//
//  main.c
//  functionz
//
//  Created by Glenn Posadas on 1/5/22.
//

#include <stdio.h>
#define print printf
#define SUMZ(x,y) (( x + y ))

// Prototype
int getSum(int, int);
void printTheSum(int sum);

// Main function
int main(int argc, const char * argv[]) {
  int sum = getSum(1, 2);
  int sum2 = SUMZ(2, 2);
  printTheSum(sum2);
  return 0;
}

// Definition of our getSum function
int getSum(int x, int y) {
  return x + y ;
}

void printTheSum(int sum) {
  print("Sum: %d\n", sum);
}
