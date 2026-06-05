#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid_c_identifier(const char *input)
{
    if (input[0] == '\0')
    {
        return 0;
    }

    if (!isalpha(input[0]) && input[0] != '_')
    {
        return 0;
    }

    for (int i = 1; input[i] != '\0'; i++)
    {
        if (!isalnum(input[i]) && input[i] != '_')
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char puffer[100];

    printf("Adj meg sztringeket '*' végjelig!\n\n");

    while (1)
    {
        printf("Input: ");
        if (fgets(puffer, sizeof(puffer), stdin) == NULL)
        {
            break;
        }

        int hossz = strlen(puffer);
        if (hossz > 0 && puffer[hossz - 1] == '\n')
        {
            puffer[hossz - 1] = '\0';
        }

        if (strcmp(puffer, "*") == 0)
        {
            break;
        }

        if (is_valid_c_identifier(puffer))
        {
            printf("YES\n\n");
        }
        else
        {
            printf("NO\n\n");
        }
    }

    return 0;
}