#include <cstdio>

float nota1,nota2,nota3,media;

void le_nota(){
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);
}

void f_media(){

    media = (nota1 * 2 + nota2 * 3 + nota3 * 4) / 9.0 ;
}

void f_imprimi(){

    printf("A media das tres prova e: %.2f\n",media);
}

int main(){

    le_nota();
    f_media();
    f_imprimi();
}