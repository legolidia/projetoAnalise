#include<stdio.h>
#include<stdlib.h>

void troca(int v[], int i, int f){
    int aux = v[i];
    v[i] = v[f];
    v[f] = aux;
}


int inverte(int v[], int n){
    int i=0,  f = n-1;
    while(i<f){
        troca(v, i, f);
        i++;
        f--;
    }
}

void printa(int v[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main(){
    int v[] = {3, 7, 11, 13, 17, 19, 23}; 
    int n = sizeof(v) / sizeof(v[0]);

  
    inverte(v, n);
    printa(v, n);
    
}
