// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>


int main() {

    int num, count, maior;
    count=1;
    maior=0;

    do{
        printf("Digite um numero:\n");
        scanf("%d", &num);

        if(num > maior){
            maior = num;
        }
        count++;
    }

    while(count<=5);
    printf("O maior numero digitado foi %d.\n", maior);

}