#include <stdio.h>

long long ipToNumber(int a, int b, int c, int d) {
    return (long long)a * 256 * 256 * 256 + b * 256 * 256 + c * 256 + d;
}

int main() {
    int a1, b1, c1, d1;
    int a2, b2, c2, d2;

    scanf("%d.%d.%d.%d", &a1, &b1, &c1, &d1);
    scanf("%d.%d.%d.%d", &a2, &b2, &c2, &d2);

    long long ip1 = ipToNumber(a1, b1, c1, d1);
    long long ip2 = ipToNumber(a2, b2, c2, d2);

    printf("%lld\n", ip2 - ip1);

    return 0;
}