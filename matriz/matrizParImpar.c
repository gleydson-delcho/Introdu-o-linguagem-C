// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    int mat[3][4], col, lin, par=0, impar=0;

    for(lin=0; lin<3;lin++)
        for(col=0;col<4;col++){
            printf("\nElemento[%d][%d] = ", lin,col);
            scanf("%d", &mat[lin][col]);
        }
    

    printf("\n******************** Saida de dados **********************\n");

    for(lin=0; lin<3;lin++)
        for(col=0;col<4;col++)
        {
        if(mat[lin][col] %2 == 0)
            par++;
        else
            impar++;
        }  
        printf("\nPares: %d ", par);
        printf("\nImpares: %d ", impar);
        
}
            
    
    