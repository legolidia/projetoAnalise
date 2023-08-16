#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[] = {4, 7, 13, 89, 22, 19, 3, 1, -17, 5, 0, 2, 6, 8, 10, 12, 14, 16, 18, 20};
    int maior = v[0], menor = v[0], pares = 0;
    float media = 0;

    int n = sizeof(v) / sizeof(v[0]);

    for (int i = 1; i < n; i++)
    {
        if (v[i] > maior)
            maior = v[i];
        
        if (v[i] < menor)
            menor = v[i];
        
        if (v[i] != 0 && v[i] % 2 == 0)
            pares++;

        media += v[i];
    }

    media /= n;

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Pares: %d\n", pares);
    printf("Media: %.2f\n", media);

    printf("Menores que a media: ");

    for (int i = 0; i < n; i++)
        if (v[i] < media)
            printf("%d ", v[i]);

    printf("\n");

    return 0;

}