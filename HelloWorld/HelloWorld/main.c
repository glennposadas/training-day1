#include <stdio.h>
#include <stdbool.h>

#define p printf
#define print printf

#define MIN 0
#define MAX 10
#define TRUE 1
#define FALSE 0
#define PI 3.1416


// Demo "?"

int main(int argc, const char * argv[]) {
  
  // DEMO for loops and constants
  
  for(int x = 0; x <= 10; x++){
    p("X -> %d", x);
  }
  
  int y = 0;
  do {
    print("y: %d", y);
    y++;
  } while (y <= 10);
  
  
  
  //------
  
  // determines if even or odd.
//  int num;
//  print("enter a number: \n");
//  scanf("%d", &num);
  
  //  bool isEven = num % 2 == 0; // mod outputs remainder. so if 0, even. otherwise odd.
  //  printf("Is num even? %s\n", isEven ? "yezzz" : "nope");
  //  print("Is num odd though? %s\n", isEven ? "nope" : "yesss");
  //
  //
  
//  if (num % 2 == 0) {
//    print("😆 Num %d is EVEN!\n", num);
//  } else {
//    print("😝 Num %d is ODD!\n", num);
//  }
  
  
  
  
  //  int jvAge = 17;
  //  int joshuaAge = 18;
  //
  //  // a `bool` outputs 1 or 0, in objc-c you'll get YES or NO. in Swift, true or false.
  //  // isLegal is true if age is >= 18
  //  bool jvLegal = jvAge >= 18;
  //  bool joshuaLegal = joshuaAge >= 18;
  //
  //  // Task:
  //  // print "true" if 1
  //  // print "false" if 0.
  //
  ////  print("is JV's age legal? %s\n", jvLegal ? "true" : "false");
  ////  print("is Joshua's age legal? %s\n", joshuaLegal ? "true" : "false");
  ////
  //  // -----
  //
  //  // Casting...
  //
  //  float someFraction;
  //  unsigned int numerator = 5, denominator = 9;
  //
  //  someFraction = (float)numerator / (float)denominator;
  //
  //  print("pi is: %f\n", someFraction);
  //
  //  numerator = -1;
  //
  //  print("%d \n", numerator);
  
  return 0;
}
