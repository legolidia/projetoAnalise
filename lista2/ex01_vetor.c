#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[] = {4, 7, 13, 1989, 22, 19, 3, 1, 0, 5};
    int maior = v[0], menor = v[0], pares = 0;
    float media = 0;

    int n = sizeof(v) / sizeof(v[0]);

    for (int i = 0; i < n; i++)
    {
        if (v[i] > maior)
            maior = v[i];
        
        if (v[i] < menor)
            menor = v[i];
        
        if (v[i] % 2 == 0)
            pares++;

        media += v[i];
    }

    media /= n;

    for (int i = 0; i < n; i++)
        if (v[i] < media)
            printf("%d ", v[i]);