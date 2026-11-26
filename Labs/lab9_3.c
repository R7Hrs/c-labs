#include <stdio.h>

int map[100][100];

int main(void) {
    int n, m, i, j, k, r, c, count = 0;    // n = rows, m = columns

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++){    // read map
        for (j = 0; j < m; j++){
            scanf("%d", &map[i][j]);
        }
    }

    for (i = 0; i < n; i++){    // go through every cell
        for (j = 0; j < m; j++){
            if (map[i][j] == 0){    // new island found
                count++;
                map[i][j] = 2;    // 2 = already counted

                for (k = 0; k < n * m; k++){    // repeat enough times to cover the island
                    for (r = 0; r < n; r++){    // r, c = second pair of counters, so i, j are not changed
                        for (c = 0; c < m; c++){
                            if (map[r][c] == 0 && r > 0 && map[r - 1][c] == 2){    // neighbor above is 2
                                map[r][c] = 2;
                            }
                            if (map[r][c] == 0 && r < n - 1 && map[r + 1][c] == 2){    // neighbor below is 2
                                map[r][c] = 2;
                            }
                            if (map[r][c] == 0 && c > 0 && map[r][c - 1] == 2){    // neighbor on the left is 2
                                map[r][c] = 2;
                            }
                            if (map[r][c] == 0 && c < m - 1 && map[r][c + 1] == 2){    // neighbor on the right is 2
                                map[r][c] = 2;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%d", count);

    return 0;
}