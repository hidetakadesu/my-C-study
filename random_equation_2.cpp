#include <stdio.h>

int numone,numtwo,condit,resif,reselse;

int main(){
	printf("Type two numbers:");
	scanf("%d,%d",&numone,&numtwo);
condit=numone+numtwo;
	if(condit>10){
	resif=condit*2;
		printf("%d is the double!",resif);
	}
	else{
	reselse=condit*3;
		printf("%d is the triple!",reselse);
	}
	return 0;
}
