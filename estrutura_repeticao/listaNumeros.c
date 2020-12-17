// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    int N, lista_N, soma_par, soma_impar;
    int count;

    soma_par = 0;
    soma_impar = 0;

    printf("Informe o tamanho da lista:\n");
    scanf("%d", &lista_N);   

    if(lista_N > 1){
    for (count=1;count<=lista_N;count++){
        
        printf("Digite um numero:\n");
        scanf("%d",&N);

        if(N%2 == 0){
            soma_par += N;
        }else{
            soma_impar += N;
        }
    }
    }else{
        printf("ERRO! O numero deve ser maior que 1.\n");
    }
    printf("Soma dos pares: %d.\n\n Soma impares %d.\n", soma_par, soma_impar);

}