#include <stdio.h>

float excess,weight,t3res; //total traffic ticket

int main(){
	printf("Hello Joao, what is the weight of the total fish you caught today?\n");
	scanf("%f",&weight);
	if(weight>50){
	t3res=(weight-50)*4;
		printf("You will need to pay a tax of %.2f because the weight is more than 50 (total %.2f).",t3res,weight);
	}
	else{
		printf("You don't need to pay a tax.",t3res,weight);
	}
	return 0;
}






// 	excess=weight-50; t3res=excess*4;
