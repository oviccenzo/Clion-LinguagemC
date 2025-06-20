#include <cstdio>
int main()
{
    int soma = 0;

    for(int num = 1; num< 20; num+=2){

        soma += num;
        printf("Numero = %d\n",num);
    }
    printf("Soma = %d\n",soma);

    return 0;
}