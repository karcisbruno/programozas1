#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        fprintf(stderr, "Nem adtál meg egyetlen szót sem!\n");
        return 1;
    }

    int min_hossz = strlen(argv[1]);

    for (int i = 2; i < argc; i++)
    {
        int jelenlegi_hossz = strlen(argv[i]);
        if (jelenlegi_hossz < min_hossz)
        {
            min_hossz = jelenlegi_hossz;
        }
    }

    for (int i = 1; i < argc; i++)
    {
        if (strlen(argv[i]) == min_hossz)
        {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}