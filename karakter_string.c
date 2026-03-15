#include <stdio.h>
#include <string.h>

typedef char* string;

int rfind_char(string s, char c) {
    int len = strlen(s);
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int main() {
    printf("%d\n", rfind_char("Abba", 'b'));
    printf("%d\n", rfind_char("Abba", 'a'));
    printf("%d\n", rfind_char("Abba", 'x'));
    printf("%d\n", rfind_char("Aladar", 'a'));

    return 0;
}