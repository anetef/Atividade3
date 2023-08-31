//Leia o peso e imprima se é menor que 60kg;

#include <stdio.h>
int main(){
    float peso;
     printf("Digite seu peso: ");
     scanf("%f", &peso);

    if(peso < 60){
        printf("menor\n");
    } else {
        printf("maior\n");
    }
    printf("Continua a execucao...\n");

    return 0;
}