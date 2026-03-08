#include <stdio.h>

void elemek(int a[], int n) {
    for (int i = 0; i < n; i++) 
        printf("%d%s", a[i], i < n - 1 ? ", " : "\n");
}

int main() {
    int t[] = {4, 7, 34, 23, 67};
    elemek(t, 5);
    return 0;
}