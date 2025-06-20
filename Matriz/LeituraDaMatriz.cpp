//
// Created by Robert L Resende on 09/11/24.
//

#include "cstdio"

int main(){
    int M[3][3];

    printf("Digite 9 elementos: \n");
    scanf("%d", &M[0][0]);
    scanf("%d", &M[0][1]);
    scanf("%d", &M[0][2]);
    scanf("%d", &M[1][0]);
    scanf("%d", &M[1][1]);
    scanf("%d", &M[1][2]);
    scanf("%d", &M[2][0]);
    scanf("%d", &M[2][1]);
    scanf("%d", &M[2][2]);

    printf("A ordem da matriz e:  \n");
    printf("%d %d %d\n", M[0][0], M[0][1], M[0][2]);
    printf("%d %d %d\n", M[1][0], M[1][1], M[1][2]);
    printf("%d %d %d\n", M[2][0], M[2][1], M[2][2]);

    return 0;
}
