// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

void main() {
    float dividendo, divisor;

    printf("Digite dois numeros reais:\n");

    scanf("%f %f", &dividendo, &divisor);

    printf("A divisão entre %.2f e  %.2f = %.2f", dividendo, divisor, dividendo/divisor);
}