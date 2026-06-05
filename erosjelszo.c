#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void kever(char *sztring, int hossz)
{
    for (int i = hossz - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        char seged = sztring[i];
        sztring[i] = sztring[j];
        sztring[j] = seged;
    }
}

int main()
{
    srand(time(NULL));

    const char *kisbetuk = "abcdefghijklmnopqrstuvwxyz";
    const char *nagybetuk = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char *szamjegyek = "0123456789";
    const char *specialis = ".,;'";

    char mind[100] = "";
    strcat(mind, kisbetuk);
    strcat(mind, nagybetuk);
    strcat(mind, szamjegyek);
    strcat(mind, specialis);

    int hossz = rand() % 5 + 8;
    char jelszo[13];

    jelszo[0] = kisbetuk[rand() % strlen(kisbetuk)];
    jelszo[1] = nagybetuk[rand() % strlen(nagybetuk)];
    jelszo[2] = szamjegyek[rand() % strlen(szamjegyek)];
    jelszo[3] = specialis[rand() % strlen(specialis)];

    int mind_hossz = strlen(mind);
    for (int i = 4; i < hossz; i++)
    {
        jelszo[i] = mind[rand() % mind_hossz];
    }
    jelszo[hossz] = '\0';

    kever(jelszo, hossz);

    printf("%s\n", jelszo);

    return 0;
}