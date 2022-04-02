#include <stdio.h>

char name[30], genre;
float tall, idfem, idmasc;

int main(){
	printf("Type your first name: ");
	scanf("%s",&name);
	printf("\nType your genre: ");
	scanf("%s",&genre);
	printf("\nType your height: ");
	scanf("%f",&tall);
	
	if(genre=='F'){
	idfem=(tall*72.7)-58;
		printf("%s, your ideal weight based on your height and genre is %.2f",name,idfem);
	}
	else{
	idmasc=(tall*62.1)-44.7;
		printf("%s, your ideal weight based on your height and genre is %.2f",name,idmasc);
	}
	return 0;
}

