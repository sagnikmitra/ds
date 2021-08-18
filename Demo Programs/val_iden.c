#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i, flag = 0;
    char arr[100];
    scanf("%s", &arr);
    if (isalpha(arr[0]) && arr[0] != '_')
        printf("Not valid");
    else
    {
        for (i = 1; i < strlen(arr); i++)
        {
            if (arr[i] == '_' || isalpha(arr[i]) || isdigit(arr[i]))
                continue;
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("Not valid");
        else
            printf("valid");
    }
    return 0;
}