// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    int count;
    float sal, maiorSal, somaSal, mediaSal;
    maiorSal = 0;
    somaSal = 0;

    for(count = 1; count <= 10; count++){
        printf("Digite o valor do salario:\n");

        scanf("%f", &sal);
        somaSal += sal;

        if(sal > maiorSal){
            maiorSal = sal;
        }
        
    }
    mediaSal = somaSal/10;
    printf("O maior salario e %.2f.\n", maiorSal);
    printf("A media dos salarios e %.2f", mediaSal);
    
}