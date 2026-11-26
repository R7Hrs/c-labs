#include <stdio.h>
#include <math.h>

int main() {
    int n, number, copy, digits, count = 0;
    long long sum;

    scanf("%d", &n);

    while (n > 0) {
        scanf("%d", &number);

        copy = number;
        digits = 0;

        while (copy > 0) {
            digits++;
            copy /= 10;
        }

        copy = number;
        sum = 0;

        while (copy > 0) {
            sum += llround(pow(copy % 10, digits));
            copy /= 10;
        }

        if (sum == number) {
            if (count > 0) printf(" ");
            printf("%d", number);
            count++;
        }

        n--;
    }

    printf("\n%d", count);
    return 0;
}