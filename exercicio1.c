#include <stdio.h>

//Leia a idade e imprima se a pessoa é maior;
main(){

int idade;

printf("Digite idade: ");
scanf("%d",&idade);

if(idade < 18){
    printf("Menor de idade\n");
}else {
    printf("Maior de idade\n");
}
printf("Continua a execucao...\n");
}