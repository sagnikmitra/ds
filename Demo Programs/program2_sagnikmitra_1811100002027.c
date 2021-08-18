#include <stdio.h>
#include <string.h>
void main()
{
    int i, len, count = 1;
    char str[50];
    printf("Enter string:");
    scanf("%[^\n]", &str);
    len = strlen(str);
    if (str[0] = '/' && str[1] == '/')
        printf("single comment line");
    else if (str[0] = '/' && str[1] == '*')
    {
        for (i = 0; i <= len; i++)
        {
            if (str[i] = '*' && str[i + 1] == '/')
            {
                printf("multi-line comment");
                count = count + 1;
                break;
            }
        }
        printf("No comments");
    }
    else if (count < 2)
    {
        printf("No comments");
    }
}