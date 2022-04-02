#include <stdio.h>

float diskm,res; //distance per kilometer, final value

int main(){
	printf("Whats the distance for your destiny?");
	scanf("%f",&diskm);
res=4.90+(3.00*diskm);
	printf("For %.2f the cost is R$ %.2f",diskm,res);
	return 0;
}
