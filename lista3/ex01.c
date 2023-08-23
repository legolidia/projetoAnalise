#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char retornaMaior(char str[], char str2[], char str3[], char maior[])
{
    strcpy(maior, str);

    if (strcmp(str2, maior) > 0)
        strcpy(maior, str2);
    if (strcmp(str3, maior) > 0)
        strcpy(maior, str3);

    return maior;
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

    retornaMaior(str, str2, str3, maior);

    printf("A maior string eh: %s", maior);

    return 0;
}
