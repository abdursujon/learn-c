#include <stdio.h>
#include <stdbool.h>

int main(){
  int items = 5; 
  float price = 555.6888; 
  double pi = 3.141592653589793; 
  char currency = '%'; 
  char customerName[] = "Sujon"; 
  
  printf("Number of items %d \n", items); 
  printf("Price of the item %.3f \n", price); 
  printf("Value of pi is %.4lf \n", pi); 
  printf("The currency is %c \n", currency); 
  printf("The name of the customer is %s \n", customerName); 
}
