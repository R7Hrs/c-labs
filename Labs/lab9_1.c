    #include <stdio.h>

    int main(void) {
        int a[100][100], a2[100][100], n, n2, m, m2, i, j;

        scanf("%d %d", &n, &m);

        for (i=0; i < n; i++){
            for (j=0; j < m; j++){
                scanf("%d", &a[i][j]);
            }
        }

        scanf("%d %d", &n2, &m2);

        for (i=0; i < n2; i++){
            for (j=0; j < m2; j++){
                scanf("%d", &a2[i][j]);
            }
        }

        if (n != n2 || m != m2){
            printf("NO\n");
            return 0;
        }

        for (i=0; i < n; i++){
            for (j=0; j < m; j++){
                if (a[i][j] != a2[i][j]){
                    printf("NO\n");
                    return 0;
                }
            }
        }

        printf("YES\n");

        return 0;
    }