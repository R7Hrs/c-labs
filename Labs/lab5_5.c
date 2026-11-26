#include <stdio.h>
#include <string.h>

int main(void) {
    char p[30], st[30];
    int k, i, top = 0, start = 0, len;

    scanf("%s %d", p, &k);
    len = strlen(p);

    for (i = 0; i < len; i++) {
        while (k > 0 && top > 0 && st[top - 1] > p[i]) {
            top--;
            k--;
        }
        st[top] = p[i];
        top++;
    }

    top = top - k;

    while (start < top - 1 && st[start] == '0') {
        start++;
    }

    if (top <= 0) {
        printf("0");
    } else {
        for (i = start; i < top; i++) {
            printf("%c", st[i]);
        }
    }

    return 0;
}