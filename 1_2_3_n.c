#include <stdio.h>

int main() {
    int n;

    printf("n: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    printf("az n erteke %d\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d", i);

        if (i < n) {
            printf(" -> ");
        }
    }
    return 0;
}