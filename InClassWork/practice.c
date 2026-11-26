#include <stdio.h>

int main(void) {
    char *animals[] = {"Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Sheep", "Monkey", "Rooster", "Dog", "Pig"};
    int year;
    scanf("%d", &year);
    printf("%s\n", animals[(year + 8) % 12]);
    return 0;
}2