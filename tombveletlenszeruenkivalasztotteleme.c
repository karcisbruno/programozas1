#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(const int n, const int tomb[])
{
    int veletlen_index = rand() % n;
    return tomb[veletlen_index];
}

int main()
{
    srand(time(NULL));

    int szamok[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int meret = sizeof(szamok) / sizeof(szamok[0]);

    int veletlen_elem = choice(meret, szamok);
    printf("A kiválasztott véletlen elem: %d\n", veletlen_elem);

    return 0;
}