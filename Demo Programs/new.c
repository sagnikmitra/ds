#include <stdio.h>
#include <string.h>
void main()
{
    char string[50], check;
    int flagCheck = 0;
    int i = 0;
    printf("enter a String: ");
    gets(string);
    while (string[i] != '\0')
    {
        switch (check)
        {
        case 0:
            flagCheck = string[i++];
            if (check == 'a')
                flagCheck = 1;
            else if (check == 'b')
                flagCheck = 2;
            else
                flagCheck = 6;
            break;
        case 1:
            flagCheck = string[i++];
            if (check == 'a')
                flagCheck = 3;
            else if (check == 'b')
                flagCheck = 4;
            else
                flagCheck = 6;
            break;
        case 2:
            flagCheck = string[i++];
            if (check == 'a')
                flagCheck = 6;
            else if (check == 'b')
                flagCheck = 2;
            else
                flagCheck = 6;
            break;
        case 3:
            flagCheck = string[i++];
            if (check == 'a')
                flagCheck = 3;
            else if (check == 'b')
                flagCheck = 2;
            else
                flagCheck = 6;
            break;
        case 4:
            flagCheck = string[i++];
            if (check == 'a')
                flagCheck = 6;
            else if (check == 'b')
                flagCheck = 5;
            else
                flagCheck = 6;
            break;
        case 5:
            flagCheck = string[i++];
            if (check == 'a')
                flagCheck = 6;
            else if (check == 'b')
                flagCheck = 2;
            else
                flagCheck = 6;
            break;
        case 6:
            printf("\n %s -> Not Recognized.");
        }
    }
    if (flagCheck == 1)
        printf("under rule a*");
    if (flagCheck == 2)
        printf("under rule a*b+");
    if (flagCheck == 4)
        printf("under rule a*b+");
    if (flagCheck == 5)
        printf("under rule abb");
}