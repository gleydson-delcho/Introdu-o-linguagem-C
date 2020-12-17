// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    int count, num;
    
    printf("Informe o número:\n");

    scanf("%d", &num);

    for(count = 1; count < 20; count ++){

        printf("%d | %d \n",num, count);
    }

}