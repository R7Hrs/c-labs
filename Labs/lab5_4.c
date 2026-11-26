#include <stdio.h>

int seen[200001];

int main(void) {
    int n, i, nr, count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d", &nr);
        if (nr != 0 && seen[nr + 100000] == 0) {
            seen[nr + 100000] = 1;
            count++;
        }
    }

    printf("%d", count);

    return 0;
}