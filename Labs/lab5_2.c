#include <stdio.h>

int main(void) {
    int N, i, x, prices[100001] = {0};
    char wantedc, ticketc;

    scanf("%d  %c", &N, &wantedc);

    for (i = 0; i < N; i++){
        scanf("%d %c", &x, &ticketc);
        if (ticketc == wantedc){
            prices[x]++;
        }
    }

    for (i = 100000; i >= 1; i--) {
        while (prices[i] > 0) {
            printf("%d ", i);
            prices[i]--;
        }
    }


    return 0;
}