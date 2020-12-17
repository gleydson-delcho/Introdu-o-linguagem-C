// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    int vet[5] = {0,0,0,0,0}, posicao;
    char letra;
    char vogal[5] = {'a','e','i','o','u'};

        printf("Digite a letra de sua escolha e 'z' para sair\n");
        printf("letra: \n");

    while(letra!='z'){
        switch (letra)
        {
        case 'a':
            vet[0]++;
            break;
        case 'e':
            vet[1]++;
            break;
        case 'i':
            vet[2]++;
            break;
        case 'o':
            vet[3]++;
            break;
        case 'u':
            vet[4]++;
            break;    
        }
        scanf("%c", &letra);
    }
    for (posicao=0;posicao<=4;posicao++){
        printf("O numero de vezes que a vogal %c aparece = ", vogal[posicao]);
        printf("aparecem e: %d,\n",vet[posicao]);
    }
}