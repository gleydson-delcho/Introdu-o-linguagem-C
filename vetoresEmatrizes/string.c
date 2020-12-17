// Diretiva de pré-compilação - uso de bibliotecas.

//Em C só é possível criar uma string usando vetores.
// char nome[i+1] - i = numero de posições o +1 é o caractere de controle (\0).
//Para capturar usa-se scanf("%s", nome[i]) - nesse caso não se utiliza o &;
// scanf() não lê o caractere de controle (“\0”), mas, se o scanf estiver dentro de uma repetição, 
// haverá tentativa de leitura desse caractere.
// em comandos de leitura de variáveis do tipo char, coloque a função getchar() para resolver esse problema, 
// conforme o exemplo anterior.

#include <stdio.h>