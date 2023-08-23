#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

void troca(char str[], char str2[])
{
    char aux[MAX];

    strcpy(aux, str);
    strcpy(str, str2);
    strcpy(str2, aux);
}

void ordena(char str[], char str2[], char str3[])
{
    if (strcmp(str, str2) > 0)
        troca(str, str2);
    if (strcmp(str, str3) > 0)
        troca(str, str3);
    if (strcmp(str2, str3) > 0)
        troca(str2, str3);
}

int main()
{
    char str[50], str2[50], str3[50], maior[50];

    printf("Digite a primeira string: ");
    fgets(str, 50, stdin);
    fflush(stdin);

    printf("Digite a segunda string: ");
    fgets(str2, 50, stdin);
    fflush(stdin);
    
    printf("Digite a terceira string: ");
    fgets(str3, 50, stdin);
    fflush(stdin);

    ordena(str, str2, str3);

    printf("As strings em ordem crescente: \n%s%s%s", str, str2, str3);

    return 0;
}
