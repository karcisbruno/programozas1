#include <stdio.h>
#include <stdlib.h>

int hasonlit(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

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

    int kapacitas = 1000000;
    int db = 0;
    int *szamok = malloc(kapacitas * sizeof(int));

    if (szamok == NULL)
    {
        fprintf(stderr, "Hiba! Nem sikerült memóriát foglalni!\n");
        fclose(f);
        return 3;
    }

    int aktualis_szam;
    while (fscanf(f, "%d", &aktualis_szam) == 1)
    {
        if (db >= kapacitas)
        {
            kapacitas *= 2;
            int *uj_szamok = realloc(szamok, kapacitas * sizeof(int));
            if (uj_szamok == NULL)
            {
                fprintf(stderr, "Hiba! Sikertelen memórianövelés!\n");
                free(szamok);
                fclose(f);
                return 4;
            }
            szamok = uj_szamok;
        }
        szamok[db] = aktualis_szam;
        db++;
    }
    fclose(f);

    qsort(szamok, db, sizeof(int), hasonlit);

    for (int i = 0; i < db; i++)
    {
        printf("%d\n", szamok[i]);
    }

    free(szamok);
    return 0;
}