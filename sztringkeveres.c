#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void my_strfry(char *s)
{
    int n = strlen(s);
    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        char seged = s[i];
        s[i] = s[j];
        s[j] = seged;
    }
}

int main()
{
    srand(time(NULL));

    char szo[] = "Aladar";

    my_strfry(szo);
    printf("%s\n", szo);

    return 0;
}