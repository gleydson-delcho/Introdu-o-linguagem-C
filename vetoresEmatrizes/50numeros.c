// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    const int tamanho=5;
    int posicao, vet1[5], vet2[5];

        printf("Digite um numero:\n");
    for( posicao=0;posicao<tamanho;posicao++){
        scanf("%d",&vet1[posicao]);
        if(vet1[posicao]%2 == 0){
            vet2[posicao] = vet1[posicao]+1;
        }else{
            vet2[posicao] = vet1[posicao]-1;
        }        
    }
    printf("Vetor 1:");
    for( posicao=0;posicao<tamanho;posicao++){
    printf("%d ",vet1[posicao]);
    }
    printf("\nVetor 2:"); 
    for( posicao=0;posicao<tamanho;posicao++){
    printf("%d ", vet2[posicao]);
    }    
}
