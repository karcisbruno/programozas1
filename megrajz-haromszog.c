#include <stdio.h>
#include <stdbool.h>

bool megrajz_haromszog(double a, double b, double c);

int main() {
    if (megrajz_haromszog(3, 4, 5)) {
        printf("A 3, 4, 5 oldalakkal a haromszog megszerkesztheto.\n");
    }

    if (!megrajz_haromszog(1, 2, 10)) {
        printf("Az 1, 2, 10 oldalakkal a haromszog NEM szerkesztheto meg.\n");
    }

    return 0;
}

bool megrajz_haromszog(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) return false;
    return (a + b > c && a + c > b && b + c > a);
}