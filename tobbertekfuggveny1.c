#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void statisztika(int tomb[], int meret, int *min, int *max, double *atlag)
{
    *min = tomb[0];
    *max = tomb[0];
    int osszeg = 0;

    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] < *min)
        {
            *min = tomb[i];
        }
        if (tomb[i] > *max)
        {
            *max = tomb[i];
        }
        osszeg += tomb[i];
    }

    *atlag = (double)osszeg / meret;
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

    int legkisebb, legnagyobb;
    double atlagérték;

    statisztika(szamok, 10, &legkisebb, &legnagyobb, &atlagérték);

    printf("Legkisebb elem: %d\n", legkisebb);
    printf("Legnagyobb elem: %d\n", legnagyobb);
    printf("Az elemek átlaga: %.1f\n", atlagérték);

    return 0;
}