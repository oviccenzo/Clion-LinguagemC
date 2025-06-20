//
// Created by Robert L Resende on 09/11/24.
//
#include <cstdio>
#include <cstdlib>
int main(){

    int i,t,M[3][4];
    for(t = 0; t < 3; ++t){
        for(i = 0; i < 4; ++i){
            M[t][i] = (t * 8) + i + 1;
        }
    }
    for(t = 0; t < 3; ++t){
        for(i = 0; i < 4; ++i){
            printf("M[%d][%d] = %d\n",t,i,M[t][i]);
        }
    }
}