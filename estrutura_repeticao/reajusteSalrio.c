// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    float reajuste, ler_sal, sal_reajuste, maior_sal;

    int count;

    maior_sal = 0;

    printf("Informe o reajuste em percentual:\n");
    scanf("%f", &reajuste);

    for(count = 1; count <= 50; count++) {
        printf("Informe o salario do funcionario:\n");
        scanf("%f", &ler_sal);

        sal_reajuste = ler_sal + (ler_sal*(reajuste/100));

        printf("O salario com reajuste é %.2f\n\n", sal_reajuste);

        if(sal_reajuste > maior_sal) {
            maior_sal = sal_reajuste;
        }


    }
    printf("O maior salario e %.2f", maior_sal);
}