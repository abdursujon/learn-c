#include <stdio.h>

int itemCounter(int amount){
	if(amount > 100){
		printf("sorry we only accept order amount of less than 100 items\n"); 
	}
	else {
		printf("Thanks for your order\n"); 
	}
}

int main(){
	int amount = 4344; 
	int amount2 = 55;

	itemCounter(amount); 
	itemCounter(amount2); 
	return 0; 
}
