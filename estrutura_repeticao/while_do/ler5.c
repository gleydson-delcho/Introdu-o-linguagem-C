// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    int num, maior, count;
    count = 1;
    maior =0;
    while(count <= 5){
        count ++;

        printf("Digite um numero:\n");
        scanf("%d", &num);

        if(num > maior){
            maior = num;
        }
    }

    printf("O maior numero foi %d.\n", maior);

}