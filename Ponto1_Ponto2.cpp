#include <stdio.h>
#include <math.h>

float vx1,vy1,vx2,vy2,res;

int main(){
	printf("Onde se encontra o ponto 1? Digite no formato x,y\n");
	scanf("%f,%f",&vx1,&vy1);
	printf("Onde se encontra o ponto 2? Digite no formato x,y\n");
	scanf("%f,%f",&vx2,&vy2);
res=sqrt(pow((vx2-vx1),2)+pow((vy2-vy1),2));
	printf("\nA distancia entre os dois pontos (ponto um esta em %.4f,%.4f e o ponto dois esta em %.4f,%.4f)sera de %.4f.",vx1,vy1,vx2,vy2,res);
}
