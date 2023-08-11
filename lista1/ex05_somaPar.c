#include<stdio.h>
#include<stdlib.h>

int somaPar(int v[], int n){
    int soma = 0;
    for(int i=0; i<n; i++)
        if(v[i]%2==0) soma+=v[i];
    return soma;
}

int main(){
    int v[] = { 145, 208, 1544, 625, 1643, 832, 996, 1210, 560, 39, 96, 317, 460} ;
    int n = sizeof(v)/sizeof(v[0]);

    printf("\n%d", somaPar(v, n));
    printf("\n");

}