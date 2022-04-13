#include <stdio.h>

int DDD;

int main(){
    printf("Type your DDD number\n");
    scanf("%d",&DDD);

    if(DDD == 11){
        printf("Your number is from Sao Paulo.");
    }
    if(DDD == 61){
        printf("Your number is from Brasilia.");
    }

    if(DDD == 71){
        printf("Your number is from Salvador.");
    }

    if(DDD == 21){
        printf("Your number is from Rio de Janeiro.");
    }

    if(DDD == 32){
        printf("Your number is from Juiz de Fora.");
    }

    if(DDD == 19){
        printf("Your number is from Campinas.");
    }

    if(DDD == 27){
        printf("Your number is from Vitoria.");
    }

    if(DDD == 31){
        printf("Your number is from Belo Horizonte.");
    }

    else{
        printf("Your number is unknown by our system.");
    }
    

    return 0;
}