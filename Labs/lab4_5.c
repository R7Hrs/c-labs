#include <stdio.h>
#include <unistd.h>

int main(void) {
    int n, row, star, space, height, section, baseStars, startStars = 1, lastStars, jump, doorsize;

    scanf("%d", &n);

    doorsize = n;
    if (n % 2 == 0){
        doorsize--;
    }

    for (section = 1; section <= n; section++) {
    height = section + 2;

    lastStars = startStars + 2 * (height - 1);
    jump = 2 * ((section + 1) / 2 + 2);
    startStars = lastStars + jump;
    }      

    baseStars = lastStars;
    startStars = 1;

    for (section = 1; section <= n; section++) {
        height = section + 2;

        for (row = 1; row <= height; row++) {
            for (space = 1; space <= (baseStars - (startStars + 2 * (row - 1))) / 2; space++) {
                printf(" ");
            }

            printf("/");

            for (star = 1; star <= startStars + 2 * (row - 1); star++) {
                printf("*");
            }

            printf("\\\n");
        }

        lastStars = startStars + 2 * (height - 1);
        jump = 2 * ((section + 1) / 2 + 2);
        startStars = lastStars + jump;
    }

    fflush(stdout);
    sleep(2);

    return 0;
}