#include <stdio.h>

int main() {
    int betuk_ossz = 0;

    for (int i = 32; i <= 126; i++) {
        printf("%d: %c\n", i, i);

        if (i >= 'A' && i <= 'Z') {
            betuk_ossz += i;
        }
    }

    printf("Az angol abc betuihez tartozo ASCII ertekek osszege: %d\n", betuk_ossz);

    return 0;
}