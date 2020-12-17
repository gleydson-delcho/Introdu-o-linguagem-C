// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    int tamanho=5, cont;
    float provaP1[tamanho], provaP2[tamanho], provaP3[tamanho];
    float mediaP1=0, mediaP2=0, mediaP3=0, mediaA=0, mediaT=0, somaP1=0, somaP2=0, somaP3=0, somaTurma=0;

    for(cont=0; cont<tamanho;cont++){
        printf("informe a nota da prova 1:\n");
        scanf("%f", &provaP1[cont]);

        somaP1 = (somaP1+provaP1[cont]);
    }
    
    mediaP1 = somaP1/tamanho;
    printf("A media das provas 1 = %.2f\n", mediaP1);

    for(cont=0; cont<tamanho;cont++){
        printf("informe a nota da prova 2:\n");
        scanf("%f", &provaP2[cont]);

        somaP2 = (somaP2+provaP2[cont]);
    }
    
    mediaP2 = somaP2/tamanho;
    printf("\nA media das provas 2 = %.2f\n", mediaP2);

    for(cont=0; cont<tamanho;cont++){
        printf("informe a nota da prova 3:\n");
        scanf("%f", &provaP3[cont]);

        somaP3 = (somaP3+provaP3[cont]);
    }
    
    mediaP3 = somaP3/tamanho;
    printf("\nA media das provas 3 = %.2f\n", mediaP3);


    for(cont=0;cont<tamanho;cont++){
        mediaA = (provaP1[cont] + provaP2[cont] + provaP3[cont]) /3;
        printf("\nA media individual = %.2f \n", mediaA);
    }

    
    for(cont=0;cont<tamanho;cont++){
        mediaT = (provaP1[cont] + provaP2[cont] + provaP3[cont]) /3;
        somaTurma += mediaA;
    }
    mediaT = somaTurma/tamanho;
    printf("\nA media da turma e: %.2f ", mediaT);

}