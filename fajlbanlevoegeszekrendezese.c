#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Hiba! Adja meg a szöveges állomány nevét!\n");
        return 1;
    }

    FILE *f = fopen(argv[1], "r");
    if (f == NULL)
    {
        fprintf(stderr, "Hiba! A fájlt nem sikerült megnyitni!\n");
        return 2;
    }

    int szamok[1000];
    int db = 0;

    while (fscanf(f, "%d", &szamok[db]) == 1)
    {
        db++;
    }
    fclose(f);

    for (int i = 0; i < db - 1; i++)
    {
        for (int j = 0; j < db - i - 1; j++)
        {
            if (szamok[j] > szamok[j + 1])
            {
                int seged = szamok[j];
                szamok[j] = szamok[j + 1];
                szamok[j + 1] = seged;
            }
        }
    }

    for (int i = 0; i < db; i++)
    {
        printf("%d\n", szamok[i]);
    }

    return 0;
}