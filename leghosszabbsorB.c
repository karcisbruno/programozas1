#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Hiba! Adja meg a fájl nevét!\n");
        return 1;
    }

    FILE *f = fopen(argv[1], "r");
    if (f == NULL)
    {
        fprintf(stderr, "Hiba! A fájlt nem sikerült megnyitni!\n");
        return 2;
    }

    int max_hossz = -1;
    int max_sor_index = 0;

    int aktualis_hossz = 0;
    int aktualis_sor_index = 1;
    int karakter;

    while ((karakter = fgetc(f)) != EOF)
    {
        if (karakter == '\n')
        {
            if (aktualis_hossz > max_hossz)
            {
                max_hossz = aktualis_hossz;
                max_sor_index = aktualis_sor_index;
            }
            aktualis_sor_index++;
            aktualis_hossz = 0;
        }
        else
        {
            aktualis_hossz++;
        }
    }

    if (aktualis_hossz > 0)
    {
        if (aktualis_hossz > max_hossz)
        {
            max_hossz = aktualis_hossz;
            max_sor_index = aktualis_sor_index;
        }
    }

    fclose(f);

    if (max_hossz != -1)
    {
        printf("%d %d\n", max_sor_index, max_hossz);
    }

    return 0;
}