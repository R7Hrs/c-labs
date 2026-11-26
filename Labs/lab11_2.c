#include <stdio.h>
#include <string.h>

char s[100][11], c[100][11];

int main() {
    int n, i, j, r = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) { // goes through each leaf
        scanf("%s %s", s[i], c[i]);
        for (j = 0; j < i; j++) // checks the earlier leaves
            if (strcmp(s[i], s[j]) == 0 && strcmp(c[i], c[j]) == 0) break;
        if (j == i) r++; // nothing matched, new leaf
    }
    printf("%d", r);
    return 0;
}