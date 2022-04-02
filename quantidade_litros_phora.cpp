#include <stdio.h>

float tisp,vel,quantl; //tisp = time spent

int main(){
	printf("A viagem durou quantas horas?\n");
	scanf("%f",&tisp);
	printf("Qual foi a velocidade media durante a viagem?\n");
	scanf("%f",&vel);
quantl=(vel*tisp)/12;
	printf("\nA quantidade de litros necessaria pra fazer a viagem e de %.3f",quantl);
	return 0;
}

