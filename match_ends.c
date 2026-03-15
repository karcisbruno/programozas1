#include <stdio.h>
#include <string.h>

typedef char* string;

int match_ends(int n, string words[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int len = strlen(words[i]);
        if (len >= 2 && words[i][0] == words[i][len - 1]) {
            count++;
        }
    }
    return count;
}

int main() {
    string szavak1[] = {"aba", "xyz", "aa", "x", "bbb"};
    printf("%d\n", match_ends(5, szavak1));

    string szavak2[] = {"", "x", "xy", "xyx", "xx"};
    printf("%d\n", match_ends(5, szavak2));

    string szavak3[] = {"aaa", "be", "abc", "hello"};
    printf("%d\n", match_ends(4, szavak3));

    return 0;
}