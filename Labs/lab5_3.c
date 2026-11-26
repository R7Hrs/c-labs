#include <stdio.h>

int main(void) {
    int n, x, c, p, min = 1000000000, i, k = 0, mine[10000], count = 0;

    scanf("%d %d", &n, &x);
    for (i = 0; i < n; i++){
        scanf("%d %d", &c, &p);
        if ( c == x){
            mine[k] = p;
            k++;
        }
        else if (p < min) {
            min = p;
        }
    }

    for (i = 0; i < k; i++){
        if (mine[i] < min){
            count++;
        }
    }

    printf("%d", count);


    return 0;
}