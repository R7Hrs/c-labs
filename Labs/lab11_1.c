#include <stdio.h>

int c[10000][26];

int main() {
    int n, i, j, k, r = 0;
    char w[101];
    scanf("%d", &n);
    for (i = 0; i < n; i++) { // goes through each word
        scanf("%s", w);
        for (j = 0; w[j]; j++) c[i][w[j] - 'a']++; // counts the letters
        for (j = 0; j < i; j++) { // checks the earlier words
            for (k = 0; k < 26 && c[i][k] == c[j][k]; k++); // stops when a count differs
            if (k == 26) break; // all counts same, so already have this one
        }
        if (j == i) r++; // nothing matched, new group
    }
    printf("%d", r);
    return 0;
}