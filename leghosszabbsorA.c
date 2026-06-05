#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        fprintf(stderr, "Hiba! Használat: %s [sorok_száma] [min_hossz] [max_hossz]\n", argv[0]);
        return 1;
    }

    srand(time(NULL));

    int sorok_szama = atoi(argv[1]);
    int min_hossz = atoi(argv[2]);
    int max_hossz = atoi(argv[3]);

    for (int i = 0; i < sorok_szama; i++)
    {
        int aktualis_hossz = rand() % (max_hossz - min_hossz + 1) + min_hossz;
        for (int j = 0; j < aktualis_hossz; j++)
        {
            char c = rand() % (126 - 33 + 1) + 33;
            putchar(c);
        }
        putchar('\n');
    }

    return 0;
}