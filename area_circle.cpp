#include <stdio.h>
#include <math.h>
float area,raio;

int main(){
	printf("Digite o raio do circulo\n");
	scanf("%f",&raio);
area=3.1415*pow(raio,2);
	printf("A area do seu circulo e %.2f",area);
	return 0;
}
