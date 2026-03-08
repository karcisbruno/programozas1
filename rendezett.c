#include <stdio.h>

int rendezett(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) return 0;
    }
    return 1;
}

int main() {
    int t1[] = {1, 2, 4, 7, 7};
    int t2[] = {3, 1, 5};
    int t3[] = {};

    printf("t1 rendezett: %d\n", rendezett(t1, 5));
    printf("t2 rendezett: %d\n", rendezett(t2, 3));
    printf("t3 (ures) rendezett: %d\n", rendezett(t3, 0));

    return 0;
}