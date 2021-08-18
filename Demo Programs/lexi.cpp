#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <ctype.h>
using namespace std;

int isKeyword(char determiningArray[])
{
    char keywords[32][10] = {"auto", "break", "case", "char", "const", "continue", "default",
                             "do", "double", "else", "enum", "extern", "float", "for", "goto",
                             "if", "int", "long", "register", "return", "short", "signed",
                             "sizeof", "static", "struct", "switch", "typedef", "union",
                             "unsigned", "void", "volatile", "while"};
    int i, flag = 0;

    for (i = 0; i < 32; ++i)
    {
        if (strcmp(keywords[i], determiningArray) == 0)
        {
            flag = 1;
            break;
        }
    }

    return flag;
}

int main()
{
    char ch, determiningArray[15], operators[] = "+-*/%=";
    ifstream fin("sagnikmitra.txt");
    int i, j = 0;

    while (!fin.eof())
    {
        ch = fin.get();
        for (i = 0; i < 6; ++i)
        {
            if (ch == operators[i])
                cout << ch << " is operator\n";
        }

        if (isalnum(ch))
        {
            determiningArray[j++] = ch;
        }
        else if ((ch == ' ' || ch == '\n') && (j != 0))
        {
            determiningArray[j] = '\0';
            j = 0;

            if (isKeyword(determiningArray) == 1)
                cout << determiningArray << " is keyword\n";
            else
                cout << determiningArray << " is A Identifier\n";
        }
    }

    fin.close();

    return 0;
}