#include <cstdio>
int main(){

    int k,i,j;

    //Faça o teste de mesa
    for(i = 1; i <= 32; i++)
        for(j = 10; j > 0; j--){
            k = i + j;
            printf("%d + %d = %d\n",i,j,k);
        }
    return 0;
}