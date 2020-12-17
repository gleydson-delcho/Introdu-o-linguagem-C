// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

void main() {

    char ch1, ch2;

    printf("Entre com duas letras:\n");

    scanf(" %c", &ch1);    
    scanf(" %c", &ch2);

    printf("As letras digitadas foram %c e %c", ch1, ch2);
}