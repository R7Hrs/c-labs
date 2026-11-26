#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int seat, class;
    char row;

    scanf("%d %c %d", &seat, &row, &class);

    class = abs(class);

    int price = 80 + pow(5, 4-class);
    price = price * 0.85;
    price = round(price);

    printf("Place: %c %d %d$", row, seat, price);


    return 0;
}
