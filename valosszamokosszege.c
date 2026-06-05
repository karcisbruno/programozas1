#include <stdio.h>

int main()
{
    FILE *f = fopen("valos_szamok.txt", "r");
    if (f == NULL)
    {
        fprintf(stderr, "Hiba! A fájlt nem sikerült megnyitni!\n");
        return 1;
    }

    double szam;
    double osszeg = 0.0;

    while (fscanf(f, "%lf", &szam) == 1)
    {
        osszeg += szam;
    }

    fclose(f);

    printf("%.20f\n", osszeg);

    return 0;
}