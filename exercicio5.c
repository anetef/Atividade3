//Avalie a relação abaixo:
//10 % 5 ∗ 2 != 5 ∗ 2 + 1
//O resultado seria verdadeiro ou falso?

#include <stdio.h>

 main() {
    int resultado_esquerdo = 10 % 5 * 2;
    int resultado_direito = 5 * 2 + 1;

    if (resultado_esquerdo != resultado_direito) {
        printf("A relacao 10 %% 5 * 2 != 5 * 2 + 1 e VERDADEIRA\n");
    } else {
        printf("A relacao 10 %% 5 * 2 != 5 * 2 + 1 e FALSA\n");
    }

    return 0;
}