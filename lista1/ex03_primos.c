#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool isPrimo(int n){
    for(int i=2; i<n; i++)
        if(n % i == 0) return false;
    return true;
}

int main(){
    int n;
    scanf("%d", &n);
    if(isPrimo(n)){
        printf("true\n");
    }else{
        printf("false\n");
    }
    return 0;
}