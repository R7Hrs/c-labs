#include <stdio.h>

int main(void) {
    long long N, D, next;

    scanf("%lld %lld", &N, &D);

    if (N >= D) {
        printf("%lld", N / D);
        N = N % D;

        if (N > 0) {    
            printf(",");
    }
    }

    while (N > 0){
        next = D / N;

        if (D % N != 0){
            next++;
        
        }
        printf("1/%lld", next);

        N = N * next - D;
        D = D * next;

        if (N > 0) {
            printf(",");
        }
    }



    return 0;
}