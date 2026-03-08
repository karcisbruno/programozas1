#include <stdio.h>

int paros(int n);
int paratlan(int n);

int main() {
    int szam = 4;
    printf("%d paros-e: %d\n", szam, paros(szam));
    printf("%d paratlan-e: %d\n", szam, paratlan(szam));
    return 0;
}

int paros(int n) {
    return n % 2 == 0;
}

int paratlan(int n) {
    return !paros(n);
}