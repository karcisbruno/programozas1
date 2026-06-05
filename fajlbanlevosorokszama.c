#include <stdio.h>

int get_number_of_lines(const char *fajlnev)
{
    FILE *f = fopen(fajlnev, "r");
    if (f == NULL)
    {
        return -1;
    }

    int sorok_szama = 0;
    int karakter;

    while ((karakter = fgetc(f)) != EOF)
    {
        if (karakter == '\n')
        {
            sorok_szama++;
        }
    }

    fclose(f);
    return sorok_szama;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Hiba! Adja meg egy szöveges állomány nevét!\n");
        return 1;
    }

    int eredmeny = get_number_of_lines(argv[1]);

    if (eredmeny == -1)
    {
        fprintf(stderr, "Hiba! A %s nevű file-t nem sikerült megnyitni!\n", argv[1]);
        return 2;
    }

    printf("%d\n", eredmeny);

    return 0;
}