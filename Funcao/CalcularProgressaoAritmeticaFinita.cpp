#include <cstdio>

float a1,an,n,resultado;

void le_pa(){
    printf("Digite o primeiro termo (a1): ");
    scanf("%f",&a1);
    printf("Digite o termo que se quer saber(an): ");
    scanf("%f",&an);
    printf("Digite a posicao do termo(n): ");
    scanf("%f",&n);
}

void media_pa(){

    resultado = (a1 + an) * n/2;
}

void imprimi(){

    printf("A soma dos termo da pa finta e: %.1f\n",resultado);
}

int main(){

    le_pa();
    media_pa();
    imprimi();

    return 0;
}