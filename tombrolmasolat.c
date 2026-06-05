#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Hány db számot szeretnél bevinni?\n");
    scanf("%d", &n);

    int eredeti[n];
    int masolat[n];

    for (int i = 0; i < n; i++)
    {
        printf("%d. szám: ", i + 1);
        scanf("%d", &eredeti[i]);
    }

    for (int i = 0; i < n; i++)
    {
        masolat[i] = abs(eredeti[i]);
    }

    printf("\nA bevitt számok abszolútértékei: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", masolat[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    printf("A megadott számok: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", eredeti[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}