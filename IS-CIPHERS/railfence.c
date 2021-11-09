#include <stdio.h>
#include <string.h>
void main()
{
    int i, j, k, l;
    char a[20], c[20], d[20], e[20];
    printf("\n\t\t RAIL FENCE TECHNIQUE");
    printf("\n\nEnter the inputstring : ");
    scanf("%s", &a);
    l = strlen(a);
    /*Ciphering*/ for (i = 0, j = 0; i < l; i++)
    {
        if (i % 2 == 0)
            c[j++] = a[i];
    }
    for (i = 0; i < l; i++)
    {
        if (i % 2 == 1)
            c[j++] = a[i];
    }
    c[j] = '\0';
    printf("\nCipher text after applying railfence :");
    printf("\n%s", c);
    for (i = 0; i < strlen(c); i++)
    {
        if (i % 2 == 0)
            d[i] = c[i];
        else
            e[i] = c[i];
    }
    printf("%s%s", d, e);
}