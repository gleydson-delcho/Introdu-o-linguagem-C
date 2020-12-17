//Diretiva de pré-compilação - uso de bibliotecas.
#include <stdio.h>

//Função main... printf faz parte da biblioteca stdio.h;
void main(){    

    int a = 10;    
    
    printf("Hello World! \n");
    
    // %d indica a posição de um tipo int.
    printf("A variável a vale %d. Seu sucessor é o %d.\n", a, a+1);
}