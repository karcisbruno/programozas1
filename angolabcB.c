#include <stdio.h>

char *keszit_abc_sztring()
{
    static char sztring[27];

    char betu = 'a';
    for (int i = 0; i < 26; i++)
    {
        sztring[i] = betu;
        betu++;
    }
    sztring[26] = '\0';

    return sztring;
}

int main()
{
    char *abc_sztring = keszit_abc_sztring();

    printf("%s\n", abc_sztring);

    return 0;
}