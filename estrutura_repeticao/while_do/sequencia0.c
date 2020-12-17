// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    while(num%10 == 0){
        printf("O numero lido foi %d.\n\n", num);
        printf("Digite um numero:\n");
        scanf("%d", &num);
    }
}