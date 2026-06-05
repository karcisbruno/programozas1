#include <stdio.h>

void feltolt_abc(char tomb[])
{
    char betu = 'a';
    for (int i = 0; i < 26; i++)
    {
        tomb[i] = betu;
        betu++;
    }
}

int main()
{
    char abc[26];

    feltolt_abc(abc);

    for (int i = 0; i < 26; i++)
    {
        printf("%c ", abc[i]);
    }
    printf("\n");

    return 0;
}