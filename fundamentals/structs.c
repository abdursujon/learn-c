#include <stdio.h>
#include <string.h>

typedef struct Person {
  char name[50];
  int age;
  char *hobbies[50];
  int hobbyCount;
} Person;

void personDetails(Person p) {
  printf("Name: %s\n", p.name);
  printf("Age: %d\n", p.age);
  printf("My Hobbies:");
 
  for (int i = 0; i < p.hobbyCount; i++) {
    if( i == p.hobbyCount - 1){
      printf("%s", p.hobbies[i]); 
    }else{
    printf("%s,", p.hobbies[i]);}
 }

 printf("\n");
 
}

int main() {

  Person p;
  strcpy(p.name, "Sujon");
  p.age = 19;
  p.hobbies[0] = " Cricket";
  p.hobbies[1] = " Football";
  p.hobbies[2] = " Coding";
  p.hobbyCount = 3;

  personDetails(p);

  return 0;
}
