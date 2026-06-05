#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Hallgato
{
    char nev[50];
};

int hasonlit(const void *a, const void *b)
{
    struct Hallgato *h1 = (struct Hallgato *)a;
    struct Hallgato *h2 = (struct Hallgato *)b;
    return strcmp(h1->nev, h2->nev);
}

int main()
{
    FILE *f = fopen("nevek.csv", "r");
    if (f == NULL)
    {
        fprintf(stderr, "Hiba! A nevek.csv fájlt nem sikerült megnyitni!\n");
        return 1;
    }

    struct Hallgato pti_sek[100];
    int pti_db = 0;

    char nev[50];
    int kor;
    char szak[20];

    while (fscanf(f, " %49[^,],%d,%19s", nev, &kor, szak) == 3)
    {
        for (int i = 0; szak[i] != '\0'; i++)
        {
            szak[i] = tolower(szak[i]);
        }

        if (strcmp(szak, "pti") == 0)
        {
            nev[0] = toupper(nev[0]);
            strcpy(pti_sek[pti_db].nev, nev);
            pti_db++;
        }
    }
    fclose(f);

    qsort(pti_sek, pti_db, sizeof(struct Hallgato), hasonlit);

    for (int i = 0; i < pti_db; i++)
    {
        printf("%s", pti_sek[i].nev);
        if (i < pti_db - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}