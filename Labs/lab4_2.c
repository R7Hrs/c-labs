#include <stdio.h>

int main() {
    int N, first, second, largest, secondlargest, smallest, secondsmallest, i;
    long long prodpos, prodneg;

    printf("How many numbers are in the list? ");
    scanf("%d", &N);

    if (N < 2) {
        printf("You need at least two numbers.\n");
        return 0;
    }

    printf("Enter the %d numbers, separated by spaces: ", N);
    scanf("%d %d", &first, &second);

    if (first >= second) {
        largest = first;
        secondlargest = second;
    } else {
        largest = second;
        secondlargest = first;
    }

    smallest = secondlargest;
    secondsmallest = largest;

    for (i = 2; i < N; i++) {
        int x;
        scanf("%d", &x);

        if (x > largest) {
            secondlargest = largest;
            largest = x;
        } else if (x > secondlargest) {
            secondlargest = x;
        }

        if (x < smallest) {
            secondsmallest = smallest;
            smallest = x;
        } else if (x < secondsmallest) {
            secondsmallest = x;
        }
    }

    prodpos = 1LL * largest * secondlargest;
    prodneg = 1LL * smallest * secondsmallest;

    if (prodpos >= prodneg) {
        printf("Maximum product: %lld\n", prodpos);
    } else {
        printf("Maximum product: %lld\n", prodneg);
    }

    return 0;
}