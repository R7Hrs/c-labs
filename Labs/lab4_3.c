#include <stdio.h>

int main(void) 
{
    int et, n, row, star, space, level;
    scanf("%d %d", &et, &n);


    for (level = 1; level <=et; level++)
    {
            for (row = 1; row <=n; row++)
        {
            for (space = 1; space <= n -row; space++)
            {
                printf(" ");
            }
            for (star = 1; star <= 2 * row - 1; star++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    for (row = 1; row <= 3; row++)
    {
        for (space = 1; space <= n - 2; space++)
        {
            printf(" ");
        }
        printf("###\n");
    }
    

    return 0;
}