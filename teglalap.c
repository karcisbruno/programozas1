#include <stdio.h>
int main() {
    int a, b;
    int kerulet, terulet;

    printf("Kerlek, add meg a teglalap 'a' oldalanak hosszat: ");
    scanf("%d", &a);

    printf("Kerlek, add meg a teglalap 'b' oldalanak hosszat: ");
    scanf("%d", &b);

    kerulet = 2 * (a + b);
    terulet = a * b;

    printf("A teglalap kerulete: %d egyseg\n", kerulet);
    printf("A teglalap terulete: %d negyzetegyseg\n", terulet);

    return 0;
}