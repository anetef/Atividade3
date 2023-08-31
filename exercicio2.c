//Leia o salário e imprima se ganha mais que o salário mínimo;
#include <stdio.h>

main(){
    float salario;
    printf("Digita salario: ");
    scanf("%f", &salario);

    if(salario <= 1320){

        printf("Salario minimo");
    }else{
        printf("Nao e salario minimo");
    }
}