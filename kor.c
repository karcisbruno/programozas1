#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h>

int main() {
    double sugar;
    double kerulet, terulet;

    printf("Kerlek, add meg a kor sugarat: ");  
    scanf("%lf", &sugar);

    kerulet = 2 * sugar * M_PI;
    terulet = sugar * sugar * M_PI;

    printf("A kor kerulete: %.2f cm\n", kerulet);
    printf("A kor terulete: %.2f negyzetcm\n", terulet);

    return 0;
}