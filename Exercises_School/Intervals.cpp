#include <stdio.h>

float numb;

int main(){
	printf("Type a number:\n");
	scanf("%f",&numb);
	
	if(numb >= 0 && numb <= 100){  //the interval
		if(numb >= 0 && numb <= 25){
			printf("Interval 0,25");
		}
		else if(numb > 25 && numb <= 50){
			printf("Interval 25,50");
		}
		else if(numb > 50 && numb <= 75){
			printf("Interval 50,75");
		}
		else if(numb > 75 && numb <= 100){
			printf("Interval 75,100");
		}
	}
	
	else{ //out of interval
		printf("Out of interval");
	}
	
	return 0;
}
