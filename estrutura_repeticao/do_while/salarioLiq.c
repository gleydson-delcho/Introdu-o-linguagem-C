// Diretiva de pré-compilação - uso de bibliotecas.

#include <stdio.h>

int main() {

    float sal_liq, sal_bruto, imposto, tot_bruto=0, tot_liq=0, tot_imposto=0;
    int funcionarios = 1;

    printf("Programa de dedução de impostos salariais!\n\n");

    do{
        printf("Informe o valor do salario:\n");
        scanf("%f", &sal_bruto);        

        if(sal_bruto <= 999)
            imposto = sal_bruto * 0,10;
            else 
                if(sal_bruto <= 1999) 
                    imposto = sal_bruto * 0,15;
                else 
                    if(sal_bruto <= 9999) 
                        imposto = sal_bruto * 0,20;
                    else 
                        if(sal_bruto <= 99999) 
                            imposto = sal_bruto * 0,25;
                        else 
                            if(sal_bruto > 99999) 
                                imposto = sal_bruto * 0,30;
                

        
        sal_liq = sal_bruto - imposto;

        tot_liq += sal_liq;
        tot_bruto += sal_liq;
        tot_imposto += imposto;

        printf("Salario liquido = %.2f.\n\n", sal_liq);

        funcionarios++;
    }
    while(funcionarios <= 5);

    printf("Total de salarios brutos = %.2f", tot_bruto);
    printf("Total de impostos = %.2f", tot_imposto);
    printf("Total de salarios liquidos = %.2f", tot_liq);

}