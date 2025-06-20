#include <cstdio>

float u,r,i,resultado;

void le_PrimeiraLeiDeOhm(){
    printf("Digite a reistencia eletrica: ");
    scanf("%f", &r);
    printf("Digite a corrente eletrica: ");
    scanf("%f",&i);
    printf("Digite a tensao ou potencial eletrico(v): ");
    scanf("%f",&u);
}

void le_CorrenteEletrica(){

    resultado = (r * i) / u;
}

void f_imprimi(){

    printf("O resultado da primeira lei de ohm e: %.1f\n",resultado);
}

int main(){

    le_PrimeiraLeiDeOhm();
    le_CorrenteEletrica();
    f_imprimi();

    return 0;
}