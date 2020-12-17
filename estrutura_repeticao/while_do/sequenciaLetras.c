// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    char letra;

    int counta=0, counte=0, counti=0, counto=0, countu=0;
        printf("Digite uma letra minuscula a cada linha e tecle enter.\n");
        printf("Tecle . para encerrar e sair.\n");

    while(letra!='.'){
        scanf("%c", &letra);


       switch (letra)
       {
       case 'a':
           counta++;
           break;
       case 'e':
           counte++;
           break;
       case 'i':
           counti++;
           break;
       case 'o':
           counto++;
           break;
       case 'u':
           countu++;
           break;
       
       }    

    }
    printf("A vogal a aparece %d vezes.\n\n", counta);
    printf("A vogal e aparece %d vezes.\n\n", counte);
    printf("A vogal i aparece %d vezes.\n\n", counti);
    printf("A vogal o aparece %d vezes.\n\n", counto);
    printf("A vogal u aparece %d vezes.\n\n", countu);
}