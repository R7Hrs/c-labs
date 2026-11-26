#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double x, y, result;
    scanf("%lf %lf", &x, &y);
    result = (sqrt(exp(x) + x + pow(x, y)-sqrt(y)))/3;

    printf("%.2lf", result);


    return 0;
}
