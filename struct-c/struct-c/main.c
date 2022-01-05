//
//  main.c
//  struct-c
//
//  Created by Glenn Posadas on 1/5/22.
//

#include <stdio.h>
#include <string.h>

//struct time
//{
//    int hour;
//    int minute;
//    int second;
//};
//
//int main()
//{
//    struct time later;
//
//  later.hour = 10;
//  later.minute = 30;
//  later.second = 4;
//
//   // later = now;
//
//    printf("the later time is %d:%2d:%2d\n", later.hour, later.minute, later.second);
//}



//typedef struct {
//  int age;
//  char name[30];
//} Person;
//
//int main() {
//  Person glenn;
//  glenn.age = 28;
//  strcpy(glenn.name, "Glenn Posadas");
//
//  printf("Person age: %d, person name: %s\n", glenn.age, glenn.name);
//}

typedef enum {
  FEMALE,
  MALE
} Sex;

typedef struct {
  int age;
  char name[30];
  Sex sex;
} Person;

int main() {
  Person glenn;
  glenn.age = 28;
  glenn.sex = FEMALE;
  strcpy(glenn.name, "Glenn Posadas");

  printf("Person age: %d, person name: %s and sex: %d\n", glenn.age, glenn.name, glenn.sex);
  
//  if (glenn.sex == MALE) {
//    printf("You have XY Chromosomes\n");
//  } else {
//    printf("You have XX Chromosomes\n");
//  }
  
  switch (glenn.sex) {
    case MALE:
      printf("You have XY Chromosomes\n");
      break;
      
    case FEMALE:
      printf("You have XX Chromosomes\n");
      break;
      
    default:
      printf("You have an UNKNOWN Chromosomes\n");
      break;
  }
}
