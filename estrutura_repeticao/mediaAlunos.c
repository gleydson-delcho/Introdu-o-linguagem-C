// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media;
    int count;

    for(count = 1; count<=40; count++) {

        printf("Digite a nota 1:\n");
        scanf("%f", &nota1);

        printf("Digite a nota 2:\n");
        scanf("%f", &nota2);

        printf("Digite a nota 3:\n");
        scanf("%f", &nota3);

        media = (nota1+nota2+nota3)/3;

        if(media >= 7){
            printf("APROVADO | %.2f.\n", media);
        }else{
            printf("REPROVADO | %.2f.\n", media);
        }

    }

}