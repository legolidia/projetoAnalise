#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ultimoDigito(int a, int b){
    int ultA, ultB;
    ultA = a % 10;
    ultB = b % 10;
    if(ultA == ultB){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(ultimoDigito(a,b)){
        printf("true\n");
    }else{
        printf("false\n");
    }
    return 0;
}