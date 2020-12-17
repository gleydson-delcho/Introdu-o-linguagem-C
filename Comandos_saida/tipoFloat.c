//Diretiva de pré-compilação - uso de bibliotecas.
#include<stdio.h>

// O resultado da função utilizando o %f retornará 6 casas decimais,
// para reduzir essas casas utiliza-se %.numero_de_casasf ex: %2f
// Essa notação apenas influencia na exibição a variável não sofre perdas de valores.

void main() {
    float a;

    a = 12.5;

    printf("a = %.2f.\n", a);
}