#include <stdio.h>
#include <math.h>

float value,res,tendisc,fivedisc; //value, final result, 10% discount price, 5% price




int main(){
	printf("How much is your product?\n");
	scanf("%f",&value);
	if(value<=100){
	fivedisc=value*0.95;
		printf("You are elegible to a 5 percent discount, total: %.2f",fivedisc);
	}
	else{
	tendisc=value*0.90;
		printf("You are elegible to a 10 percent discount, total: %.2f",tendisc);
	}
	return 0;
}
