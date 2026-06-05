#include <stdio.h>

int main()
{
    FILE *be = fopen("in.txt", "r");
    if (be == NULL)
    {
        fprintf(stderr, "Hiba! Az in.txt fájlt nem sikerült megnyitni!\n");
        return 1;
    }
    printf("# in.txt sikeresen megnyitva\n");

    FILE *ki = fopen("out.txt", "w");
    if (ki == NULL)
    {
        fprintf(stderr, "Hiba! A out.txt fájlt nem sikerült létrehozni!\n");
        fclose(be);
        return 2;
    }

    printf("# 0,5-nél nagyobb számok szűrése...\n");

    double szam;
    int darab = 0;

    while (fscanf(be, "%lf", &szam) == 1)
    {
        if (szam > 0.5)
        {
            fprintf(ki, "%f\n", szam);
            darab++;
        }
    }

    printf("# szűrés vége\n");

    fclose(be);
    fclose(ki);
    printf("# out.txt bezárva\n");

    printf("# out.txt-be kiírt számok mennyisége: %d db\n", darab);

    return 0;
}