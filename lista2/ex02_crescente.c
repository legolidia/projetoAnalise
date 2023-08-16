#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ehCrescente(int v[], int n){
    for(int i = 0; i < n-1; i++){
        if(v[i] > v[i+1])
            return false;
    }
    return true;
}

int main(){
    int v[] = {3, 7, 11, 13, 17, 19, 23}; 
    int n = sizeof(v) / sizeof(v[0]);
    
    ehCrescente(v, n) ? printf("O vetor v eh crescente\n") : printf("O vetor v nao eh crescente\n");
    
    int v2[] = {0, -2, 4, 7, 11, 13, 17, 19, 23};
    n = sizeof(v2) / sizeof(v2[0]);

    ehCrescente(v2, n) ? printf("O vetor v2 eh crescente\n") : printf("O vetor v2 nao eh crescente\n");
}