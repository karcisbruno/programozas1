#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Statisztika
{
    int min;
    int max;
    double atlag;
};

struct Statisztika keszit_statisztika(int tomb[], int meret)
{
    struct Statisztika stat;
    stat.min = tomb[0];
    stat.max = tomb[0];
    int osszeg = 0;

    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] < stat.min)
        {
            stat.min = tomb[i];
        }
        if (tomb[i] > stat.max)
        {
            stat.max = tomb[i];
        }
        osszeg += tomb[i];
    }

    stat.atlag = (double)osszeg / meret;
    return stat;
}

int main()
{
    srand(time(NULL));

    int szamok[10];

    printf("A tömb elemei: ");
    for (int i = 0; i < 10; i++)
    {
        szamok[i] = rand() % 90 + 10;
        printf("%d", szamok[i]);
        if (i < 9)
        {
            printf(", ");
        }
    }
    printf("\n");

    struct Statisztika eredmény = keszit_statisztika(szamok, 10);

    printf("Legkisebb elem: %d\n", eredmény.min);
    printf("Legnagyobb elem: %d\n", eredmény.max);
    printf("Az elemek átlaga: %.1f\n", eredmény.atlag);

    return 0;
}