//Diretiva de pré-compilação - uso de bibliotecas.
#include <stdio.h>

//Função main... printf faz parte da biblioteca stdio.h;
void main(){
    //int a, b, c;

    int a = 10;
    int b = a + 1;
    int c = b + 2;
    
    printf("Hello World! \n");
    
    // %d indica a posição de um tipo int.
    printf("Atualmente, temos a= %d, b= %d e c= %d. \n", a, b, c);
}