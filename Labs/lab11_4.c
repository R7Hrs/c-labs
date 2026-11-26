#include <stdio.h>

int main() {
    int n, i, j, r, t, neg, ops, v;
    char s[101];
    scanf("%d", &n);
    for (i = 0; i < n; i++) { // goes through each expression
        scanf("%s", s);
        r = 0; t = 1; neg = 0; ops = 0;
        for (j = 0; s[j]; j++) {
            if (s[j] == '!') { neg = !neg; ops++; }
            else if (s[j] == '0' || s[j] == '1') {
                v = s[j] - '0';
                if (neg) v = !v; // flips the digit if a ! came before it
                neg = 0;
                t = t && v; // current AND group
            }
            else { // it's && or ||
                ops++;
                if (s[j] == '|') { r = r || t; t = 1; } // OR closes the group
                j++; // skips the second & or |
            }
        }
        r = r || t; // last group
        printf("%d (%d)\n", r, ops);
    }
    return 0;
}