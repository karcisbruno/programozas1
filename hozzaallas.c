#include <stdio.h>
#include <stdlib.h>

void pozitiv(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) a[i] = abs(a[i]);
    }
}

void elemek(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d%s", a[i], i < n - 1 ? ", " : "\n");
    }
}

int main() {
    int t[] = {-5, 12, -33, 0, -1};
    int n = 5;

    elemek(t, n);
    pozitiv(t, n);
    elemek(t, n);

    return 0;
}