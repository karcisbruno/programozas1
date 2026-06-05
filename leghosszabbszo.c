#include <stdio.h>
#include <string.h>

int main()
{
    char puffer[100];
    int szo_db = 0;
    int max_hossz = 0;

    printf("Adj meg szavakat '*' végjelig!\n");

    while (1)
    {
        printf("Szó: ");
        if (fgets(puffer, sizeof(puffer), stdin) == NULL)
        {
            break;
        }

        int hossz = strlen(puffer);
        if (hossz > 0 && puffer[hossz - 1] == '\n')
        {
            puffer[hossz - 1] = '\0';
            hossz--;
        }

        if (puffer[0] == '*' && puffer[1] == '\0')
        {
            break;
        }

        szo_db++;

        if (hossz > max_hossz)
        {
            max_hossz = hossz;
        }
    }

    printf("\n%d db szót adtál meg. A leghosszabb szó %d karakterből áll.\n", szo_db, max_hossz);

    return 0;
}