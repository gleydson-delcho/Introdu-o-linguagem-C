//Diretiva de pré-compilação - uso de bibliotecas.
#include <stdio.h>

//Função main... printf faz parte da biblioteca stdio.h;
void main(){
    int a = 10;

    char ch = 'Z';


    printf("Hello World! \n");
    
    // %d indica a posição de um tipo int e %c a posição de um tipo char.
    printf("Atualmente, temos a= %d e ch= %c. \n", a, ch);
}