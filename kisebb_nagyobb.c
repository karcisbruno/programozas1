#include <stdio.h>

int min_elem(int a[], int n) {
    int m = a[0];
    for (int i = 1; i < n; i++) if (a[i] < m) m = a[i];
    return m;
}

int max_elem(int a[], int n) {
    int m = a[0];
    for (int i = 1; i < n; i++) if (a[i] > m) m = a[i];
    return m;
}

int main() {
    int t[] = {12, 5, 67, 1, 23};
    int n = 5;
    printf("Legkisebb: %d\n", min_elem(t, n));
    printf("Legnagyobb: %d\n", max_elem(t, n));
    return 0;
}