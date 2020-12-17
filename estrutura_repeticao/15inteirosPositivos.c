// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    int num, maior, count;
    maior = 0;

    for(count = 1; count <= 15; count++){
    printf("Digite um número:\n");
    scanf("%d", &num);

    if(num > maior) {
        maior = num;
    }
    printf("O maior dos números lidos é %d.\n", maior);
    }



}