//
// Created by Robert L Resende on 09/11/24.
//
#include "cstdio"
int main(){

    int t,i,M[4][3];
    printf("Digite 9 elementos: \n");
    for(t = 0 ;t < 4; t++){
        for (i = 0; i < 3; i++) {
            scanf("%d", &M[t][i]);
        }
    }

    printf("\nElementos da matriz: \n");
    for(t = 0; t < 4; t++){
        for(i = 0; i < 3; i++){
            printf("%4d ", M[t][i]);
        }
        printf("\n");
    }
}