#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isKeyword(char determineArr[])
{
    char keywords[32][10] = {"auto", "break", "case", "char", "const", "continue", "default",
                             "do", "double", "else", "enum", "extern", "float", "for", "goto",
                             "if", "int", "long", "register", "return", "short", "signed",
                             "sizeof", "static", "struct", "switch", "typedef", "union",
                             "unsigned", "void", "volatile", "while"};
    int i, flag = 0;

    for (i = 0; i < 32; ++i)
    {
        if (strcmp(keywords[i], determineArr) == 0)
        {
            flag = 1;
            break;
        }
    }

    return flag;
}

int main()
{
    char ch, determineArr[15], operators[] = "+-*/%=";
    FILE *fp;
    int i, j = 0;

    fp = fopen("sagnikmitra.txt", "r");

    while ((ch = fgetc(fp)) != EOF)
    {
        for (i = 0; i < 6; ++i)
        {
            if (ch == operators[i])
                printf("%c is operator\n", ch);
        }

        if (isalnum(ch))
        {
            determineArr[j++] = ch;
        }
        else if ((ch == ' ' || ch == '\n') && (j != 0))
        {
            determineArr[j] = '\0';
            j = 0;

            if (isKeyword(determineArr) == 1)
                printf("%s is keyword\n", determineArr);
            else
                printf("%s is an Identifier\n", determineArr);
        }
    }

    fclose(fp);

    return 0;
}