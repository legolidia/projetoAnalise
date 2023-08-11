#include <stdio.h>
#include <stdlib.h>

int inverteNumero(int n){
    int inv, r;
    inv = 0;
    while(n > 0){
        r = n % 10;
        inv = inv * 10 + r;
        n = n / 10;
    }
    return inv;
}

int main(){
    int n, inv, r;
    
    scanf("%d", &n);
    inv = inverteNumero(n);
    printf("%d\n", inv);

    return 0;

}