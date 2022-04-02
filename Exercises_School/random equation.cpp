#include <stdio.h>
#include <math.h>

float numone,numtwo,numthree,res_A,res_B,res_C;

int main(){
	printf("Type two integer numbers and one rational number: \n");
	scanf("%f,%f,%f",&numone,&numtwo,&numthree);
res_A=(numone*2)*(numtwo/2);
res_B=(numone*3)+(numthree);
res_C=sqrt(numthree);
	printf("The results for the equations is:\n the product of the double of %.1f with a half of %.1f is %.2f",numone,numtwo,res_A);
	printf("\n the sum of the triple of %.1f with the %.1f is %.2f",numone,numthree,res_B);
	printf("\n the cubic root of %.1f is %.2f",numthree,res_C);
	return 0;
}

