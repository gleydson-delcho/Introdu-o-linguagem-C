// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main(){

    float nota[20] , media=0;
    int count;

    for(count=1; count<=20; count++){
        printf("Digite a nota:\n");
        scanf("%f", &nota[count]);        
    }

        for(count=1; count<=nota[count]; count++){
            if(nota[count] >= 7){
                
            printf("|%.2f|\n\n", nota[count]);
            }
        }
}