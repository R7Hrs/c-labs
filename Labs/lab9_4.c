#include <stdio.h>

int main(void) {
    char b[3][3] = {{' ',' ',' '}, {' ',' ',' '}, {' ',' ',' '}};    // empty board
    int i, j, r, c, m, win = 0;
    char p;    // X = you, O = computer

    for (m = 0; m < 9 && !win; m++) {    // max 9 turns
        p = (m % 2 == 0) ? 'X' : 'O';    // even turn = you, odd turn = computer

        if (p == 'X') {
            do {    // ask until the move is valid
                printf("Row Col (1-3): ");
                if (scanf("%d %d", &r, &c) != 2) {    // not two numbers, quit
                    printf("Not numbers, bye\n");
                    return 0;
                }
                r--;
                c--;
            } while (r < 0 || r > 2 || c < 0 || c > 2 || b[r][c] != ' ');
        } else {
            for (i = 0; i < 3; i++) {    // computer takes an empty cell
                for (j = 0; j < 3; j++) {
                    if (b[i][j] == ' ') {
                        r = i;
                        c = j;
                    }
                }
            }
        }

        b[r][c] = p;    // place the move

        for (i = 0; i < 3; i++) {    // check rows and columns
            if (b[i][0] == p && b[i][1] == p && b[i][2] == p) win = 1;
            if (b[0][i] == p && b[1][i] == p && b[2][i] == p) win = 1;
        }
        if (b[0][0] == p && b[1][1] == p && b[2][2] == p) win = 1;    // diagonals
        if (b[0][2] == p && b[1][1] == p && b[2][0] == p) win = 1;

        for (i = 0; i < 3; i++) {    // print the board
            printf("%c|%c|%c\n", b[i][0], b[i][1], b[i][2]);
        }
        printf("\n");
    }

    if (win) printf("%c wins!\n", p);
    else printf("Draw!\n");

    return 0;
}