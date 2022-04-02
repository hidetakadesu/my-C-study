#include <stdio.h>

int pword;

int main(){
	printf("Type your password:\n");
	scanf("%d",&pword);
	if(pword==4531){
		printf("Allowed Access");
	}
	else{
		printf("Denied Access");
	}
	return 0;
}
