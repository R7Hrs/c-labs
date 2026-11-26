#include<stdio.h>

    int check(int a, int b, int c){
        int temp;

        if (a > b){
            temp = a;
            a = b;
            b = temp;   
        }
        if (b > c){
            temp = b;
            b = c;
            c = temp;
        }
        if (a > b){
            temp = a;
            a = b;
            b = temp;   
        }

        if (a + b > c){
            return 2;
        }
        else if (a + b == c){
            return 1;
        }
        else {
            return 0;
        }
    }

int main(){
    int sticks[4], best = 0, result;
    scanf("%d %d %d %d", &sticks[0], &sticks[1], &sticks[2], &sticks[3]);

    result = check(sticks[0], sticks[1], sticks[2]);
    if (result > best) {
        best = result;
    }

        result = check(sticks[0], sticks[1], sticks[3]);
    if (result > best) {
        best = result;
    }

        result = check(sticks[0], sticks[2], sticks[3]);
    if (result > best) {
        best = result;
    }

        result = check(sticks[1], sticks[2], sticks[3]);
    if (result > best) {
        best = result;
    }

    if (best == 2){
        printf("TRIANGLE");
    }
    else if (best == 1){
        printf("SEGMENT");
    }
    else {
        printf("IMPOSSIBLE");
    }



    return 0;
}