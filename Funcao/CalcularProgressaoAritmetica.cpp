#include <cstdio>

int a1,n,r,resultado;

void le_pa(){
    printf("Digite o primeiro termo de a1: ");
    scanf("%d",&a1);
    printf("Digite a posicao do termo de n: ");
    scanf("%d",&n);
    printf("Digite a razao da pa: ");
    scanf("%d",&r);
}

void pa(){

    resultado = a1 + (n - 1) * r;
}

void imprimi(){

    printf("O numero da progressao aritmetica e: %d\n",resultado);
}

int main(){

    le_pa();
    pa();
    imprimi();
}