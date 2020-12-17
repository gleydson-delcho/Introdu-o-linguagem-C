// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

void main() {

    int a, b;

    a = 10;
    b = 10;

    if(a==b){
        //aninhado
        if(a*b <= 100)
        a*=a;
        printf("A soma de %d e %d = %d.\n", a, b, a+b);
    }else{
        //composto
        printf("A divisão de %d/%d = %d. \n", a, b, a/b);
    }

}