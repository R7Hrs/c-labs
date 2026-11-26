#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    long long tiles_n = (n + a - 1) / a;
    long long tiles_m = (m + a - 1) / a;
    long long total = tiles_n * tiles_m;

    printf("%lld", total);


    return 0;
}
