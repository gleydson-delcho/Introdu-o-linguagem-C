// Diretiva de pré-compilação - uso de bibliotecas.

//para imprimir uma posição de vetor deve-se usar vet[i]. i = numero da posição.

#include <stdio.h>

int main() {

    int num [100], count;

    for(count=1;count<=100;count++){

        printf("Digite um numero:\n");
        scanf("%d", &num);  
        num[count] = num;
    }
    for(count=100; count>=1; count--){

    printf("%d ", num[100]);
    }
}