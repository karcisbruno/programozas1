#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, also, felso;

    srand(time(NULL));

    printf("Hány db random számot kérsz?\n");
    scanf("%d", &n);
    printf("Alsó határ: ");
    scanf("%d", &also);
    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &felso);

    int szamok[n];

    for (int i = 0; i < n; i++)
    {
        szamok[i] = rand() % (felso - also + 1) + also;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (szamok[j] > szamok[j + 1])
            {
                int seged = szamok[j];
                szamok[j] = szamok[j + 1];
                szamok[j + 1] = seged;
            }
        }
    }

    printf("\nA generált számok: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", szamok[i]);
    }
    printf("\n");

    return 0;
}