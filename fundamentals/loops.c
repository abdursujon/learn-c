#include <stdio.h>

int main() {

  // 1. For loop
  int n[] = {1, 2, 4, 5, 6, 9};
  int len = sizeof(n) / sizeof(n[0]);
  for (int i = 0; i < len; i++) {
    printf("Number: %d\n", n[i]);
  }

  printf("\n"); 
   
  // 2. While loop 
  int j = 0; 
  while(j < len){
   printf("Number: %d\n", n[j]); 
   j++; 
  }
  
}
