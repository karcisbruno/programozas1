#include <stdio.h>
#include <ctype.h>

int strcmpi(const char *s1, const char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        char c1 = tolower((unsigned char)s1[i]);
        char c2 = tolower((unsigned char)s2[i]);

        if (c1 != c2)
        {
            return c1 - c2;
        }
        i++;
    }
    return tolower((unsigned char)s1[i]) - tolower((unsigned char)s2[i]);
}

int main()
{
    printf("%d\n", strcmpi("ez", "EZ"));
    printf("%d\n", strcmpi("Alma", "alMa"));
    printf("%d\n", strcmpi("abc", "abd"));
    return 0;
}