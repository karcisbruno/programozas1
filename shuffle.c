#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int n, int tomb[])
{
    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);

        int seged = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = seged;
    }
}

int main()
{
    srand(time(NULL));

    int szamok[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int meret = sizeof(szamok) / sizeof(szamok[0]);

    shuffle(meret, szamok);

    for (int i = 0; i < meret; i++)
    {
        printf("%d ", szamok[i]);
    }
    printf("\n");

    return 0;
}