// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media;
    int count = 1;    

    while(count <= 40){
        count ++;
        
        printf("Digite a nota n1:\n");
        scanf("%f", &nota1);
        printf("Digite a nota n2:\n");
        scanf("%f", &nota2);
        printf("Digite a nota n3:\n");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3)/3;

        if(media < 7) {
            printf("REPROVADO | media: %.2f\n\n", media);
        }else{
            printf("APROVADO | media: %.2f\n\n", media);
        }            
    }
}