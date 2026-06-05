#include <stdio.h>

int main()
{
    int cellak[601] = {0};

    for (int lepes = 1; lepes <= 600; lepes++)
    {
        for (int i = lepes; i <= 600; i += lepes)
        {
            if (cellak[i] == 0)
            {
                cellak[i] = 1;
            }
            else
            {
                cellak[i] = 0;
            }
        }
    }

    int elso = 1;
    for (int i = 1; i <= 600; i++)
    {
        if (cellak[i] == 1)
        {
            if (!elso)
            {
                printf(", ");
            }
            printf("%d", i);
            elso = 0;
        }
    }
    printf("\n");

    for (int i = 1; i <= 600; i++)
    {
        if (cellak[i] == 1)
        {
            printf("%d", i);
        }
    }
    printf("\n");

    return 0;
}