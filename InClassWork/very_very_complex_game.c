#include <stdio.h>

int main() {
    char character, command;
    int height=16, width=150, x = width / 2, y = height / 2, i;

    printf("Enter a charachter: ");
    scanf(" %c", &character);

    for (i=0; i<y; i++){printf("\n");}

    for (i=0; i<x; i++){printf(" ");}

    printf("%c\n", character);
    for (i = y + 1; i < height; i++) {printf("\n");}

    printf("Enter W,A,S,D or Q to quit: ");
    scanf(" %c", &command);

    while (command != 'Q' && command != 'q') {
        if ((command == 'W' || command == 'w') && y > 0) { y--; }
        if ((command == 'S' || command == 's') && y < height - 1) { y++; }
        if ((command == 'A' || command == 'a') && x > 0) { x--; }
        if ((command == 'D' || command == 'd') && x < width - 1) { x++; }

        for (i = 0; i < y; i++) { printf("\n"); }
        for (i = 0; i < x; i++) { printf(" "); }

        printf("%c\n", character);
        for (i = y + 1; i < height; i++) {printf("\n");}

        printf("Enter W,A,S,D or Q to quit: ");
        scanf(" %c", &command);
    }

    return 0;
}