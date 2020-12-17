#include <stdio.h>

int main() {

    int lin, col, matA[2][2],matB[2][2], somaMatriz[2][2];

    //Matriz A

    for(lin=0; lin<2;lin++)
        for(col=0;col<2;col++){
            printf("\nElemento[%d][%d] = ", lin,col);
            scanf("%d", &matA[lin][col]);
        }

    //Matriz B

    for(lin=0; lin<2;lin++)
        for(col=0;col<2;col++){
            printf("\nElemento[%d][%d] = ", lin,col);
            scanf("%d", &matB[lin][col]);
        }

    //Somar Matriz

    for(lin=0; lin<2;lin++)
        for(col=0;col<2;col++){
            somaMatriz[lin][col] = matA[lin][col] + matB[lin][col];

            printf("[%d]", somaMatriz[lin][col]);
        }


}