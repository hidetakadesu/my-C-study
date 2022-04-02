#include <stdio.h>

float cel,fah;

int main(){
	printf("Qual a temperatura em Fahrenheit?\n");
	scanf("%f",&fah);
cel=((fah-32)*5)/9;
	printf("%.2f em Fahrenheit equivale a %.2f em Celsius.",fah,cel);
	return 0;
}
