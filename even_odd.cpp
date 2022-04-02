#include <stdio.h>

int req; //requested number

int main(){
	printf("What is the number?");
	scanf("%d",&req);
	if(0==req%2){
		printf("This number is even");
	}
	else{
		printf("This number is odd");
	}
	return 0;
}
