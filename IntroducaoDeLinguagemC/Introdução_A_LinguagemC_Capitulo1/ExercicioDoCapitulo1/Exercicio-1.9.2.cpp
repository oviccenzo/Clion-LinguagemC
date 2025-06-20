//
// Created by Robert L Resende on 20/06/25.
//
//Escreva funcoes similares ao codigo do exemplo 1.4.1, definindo variaveis de
//tipos e imprimindo-as. use os formatos de leituras e escritas: %d %i %o %x para inteiros
//e %f %e para reais
//Codigos     | significados
// %d ou %i   | inteiros
//%o          | octal
//%x          | hexadecimal
//%f          | float
#include "cstdio"

int main(){

    int a;

    long int a1;


    printf("Digite uma letra: ");
    scanf("%i", &a);

    printf("Digite um numero: ");
    scanf("%lo",&a1);

//    printf("");
//    scanf("");

    printf("O letra digitado é: %i\n",a);
    printf("O numero digitado é: %lo\n",a1);

    return 0;
}