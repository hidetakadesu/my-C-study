#include <stdio.h>

int n1,n2,n3,med;

int main(){
	printf("Qual foi a nota da primeira prova?\n");
	scanf("%d",&n1);
	printf("Qual foi a nota da segunda prova?\n");
	scanf("%d",&n2);
	printf("Qual foi a nota da terceira prova?\n");
	scanf("%d",&n3);
med=n1*0.2+n2*0.3+n3*0.5;
	printf("\nA nota 1 e %d\nA nota 2 e %d\nA nota 3 e %d\nTotalizando %d de media.",n1,n2,n3,med);
	return 0;
}
