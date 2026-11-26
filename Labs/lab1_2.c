#include <stdio.h>
#include <string.h>

int main(void) {
    char a[51], b[51], result[53];
    scanf("%s %s", a, b);

    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int k = 52;
    int carry = 0;

    result[k--] = '\0';

    while (i >= 0 || j >= 0 || carry) {
        int d1 = (i >= 0) ? a[i--] - '0' : 0;
        int d2 = (j >= 0) ? b[j--] - '0' : 0;
        int sum = d1 + d2 + carry;

        carry = sum / 10;
        result[k--] = (sum % 10) + '0';
    }

    printf("%s\n", result + k + 1);

    return 0;
}