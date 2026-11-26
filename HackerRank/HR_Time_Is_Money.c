#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, H, M, S;

    scanf("%d", &x);

    H = x / 3600;
    M = x % 3600;
    M = M /60;
    S = x % 60;

    printf("%dH %dm %ds", H, M, S);

    return 0;
}
