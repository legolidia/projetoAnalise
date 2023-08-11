#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool isPrimo(int n){
    for(int i=2; i<n; i++)
        if(n % i == 0) return false;
    return true;
}

int main(){
    for(int i=0; i<100; i++)
        if(isPrimo(i)) printf("%d\n", i);
    return 0;
}