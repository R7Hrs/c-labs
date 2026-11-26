#include <stdio.h>

int main(){
    double x, y, result;
    char op;
    int error = 0;

    scanf("%lf  %c %lf", &x, &op, &y);

    switch (op)
    {
    case '+':
        result = x + y;
        break;

    case '-':
        result = x - y;
        break;

    case '*':
        result = x * y;
        break;
    
    case '/':
        if (y == 0 ){
            error = 1;
            printf("NOT SUPPORTED");
            break;
        }
        result = x / y;
        break;
    
    default:
    error = 1;
    printf("ERROR");
        break;
    }

    if (error == 0){
        printf("%.6lf", result);
    }


    return 0;
}