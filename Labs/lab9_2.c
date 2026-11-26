#include <stdio.h>

int main(void) {
    int n, m, a[100][100], i, j, h = 0, v = 0;    // n = rows, m = columns

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++){    // read map
        for (j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++){    // count horizontal tiles
        for (j = 0; j < m; j++){
            if (a[i][j] == 0 && (j == 0 || a[i][j-1] != 0)){ h++; }
        }
    }

    for (i = 0; i < n; i++){    // count vertical tiles
        for (j = 0; j < m; j++){
            if (a[i][j] == 0 && (i == 0 || a[i-1][j] != 0)){ v++; }
        }
    }

    for (i = 0; i < n; i++){    // print map, 0 becomes 2
        for (j = 0; j < m; j++){
            if (a[i][j] == 0){
                printf("2 ");
            }
            else {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

    if(h == 0){    // print result
        printf("OK");
    }
    else if (h <= v){
        printf("H%d", h);
    }
    else {
        printf("V%d", v);
    }

    return 0;
}