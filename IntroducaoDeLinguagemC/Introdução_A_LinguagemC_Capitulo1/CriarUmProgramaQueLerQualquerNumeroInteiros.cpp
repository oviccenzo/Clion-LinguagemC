//
// Created by Robert L Resende on 19/06/25.
//
#include "cstdio"

int main(){

    int a,b,c,d,soma;
    printf("Digite um numero a: ");
    scanf("%d",&a);
    printf("Digite um numero b: ");
    scanf("%d",&b);
    printf("Digite um numero b: ");
    scanf("%d",&c);
    printf("Digite um numero b: ");
    scanf("%d",&d);

    soma = a + b + c + d;

    printf("O resultado dos quatros numero é: %d\n",soma);

    if(a < b || a < c || a < d){
        printf("O numero é menor: %d\n",a);
    } else if(a > b || b > c || b > d){
        printf("O numero é maior: %d\n",b);
    } else{
        printf("Os numeros são iguais");
    }
}