// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    int num;

    printf("O sistema sera encerrado caso seja digitado 0 ou 9.\n\n");
    do{
    printf("Digite o numero:\n");
        scanf("%d", &num);

        if(num!=0 && num!=9){
            if(num%2 == 0) {                
                printf("O sucessor = %d.\n\n", num+1);
            }else{                
                printf("O antecessor = %d.\n\n", num-1);
            }
        }
    }
    while(num!=1 && num != 10);
    printf("Encerrado!\n");
}
