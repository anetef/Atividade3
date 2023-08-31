// Leia a altura e imprima se é maior que 1.8m;
#include <stdio.h>
int main(){

    float altura;
      printf("Digite sua altura: ");
      scanf("%f", &altura);

   if(altura < 1.80){
    printf("baixo\n");
   }   else {
    printf("alto\n");
   }
   printf("Continua a execucao...\n");
}