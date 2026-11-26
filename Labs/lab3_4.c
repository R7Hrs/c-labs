#include<stdio.h>
#include<string.h>

int main(){
    int x, tens, units, error = 0;
    char y[20];

    scanf("%d", &x);
    tens = x / 10;
    units = x % 10;

    if (tens < 2 || (tens >= 10 && units > 0) ){
        error = 1;
    }

    switch (tens) {
    case 2:
        strcpy(y, "twenty");
        break;
    case 3:
        strcpy(y, "thirty");
        break;
    case (4):
        strcpy(y, "forty");
        break;
    
    case (5):
        strcpy(y, "fifty");
        break;

    case (6):
        strcpy(y, "sixty");
        break;

    case (7):
        strcpy(y, "seventy");
        break;

    case (8):
        strcpy(y, "eighty");
        break;

    case (9):
        strcpy(y, "ninety");
        break;

    case (10):
        strcpy(y, "one hundred");
        break;
    
    default:
    error = 1;
        break;
    }

    if (units > 0  && error == 0){
        switch (units)
        {
        case 1:
            strcat(y, "-one");
            break;

        case 2:
            strcat(y, "-two");
            break;

        case 3:
            strcat(y, "-three");
            break;

        case 4:
            strcat(y, "-four");
            break;

        case 5:
            strcat(y, "-five");
            break;

        case 6:
            strcat(y, "-six");
            break;

        case 7:
            strcat(y, "-seven");
            break;

        case 8:
            strcat(y, "-eight");
            break;

        case 9:
            strcat(y, "-nine");
            break;
        
        default:
            break;
        }
    }

    if (error == 0){
        printf("%s", y);
    }

    else if (error == 1){
        printf("OUT OF RANGE");
    }

    return 0;
}