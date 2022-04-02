#include <stdio.h>

int numone,numtwo;

int main (){
	printf("Type two numbers:");
	scanf("%d,%d",&numone,&numtwo);
	if(numone>numtwo){
		printf("%d is bigger",numone);
	}
	else{
		printf("%d is bigger",numtwo);
	}
	return 0;
}
