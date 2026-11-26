#include <stdio.h>
#include <string.h>

char s[100001], r[100001], a[101], b[101];

int check(char *t) {
    char *p = strstr(t, a); // first place where a appears
    return p && strstr(p + strlen(a), b); // b has to appear after it
}

int main() {
    int n, i, f, k;
    scanf("%s %s %s", s, a, b);
    n = strlen(s);
    for (i = 0; i < n; i++) r[i] = s[n - 1 - i]; // reversed string
    f = check(s);
    k = check(r);
    if (f && k) printf("both");
    else if (f) printf("forward");
    else if (k) printf("backward");
    else printf("fantasy");
    return 0;
}