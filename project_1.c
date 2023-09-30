#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess, number, nguess=1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("the number is %d\n", number);
    while (guess != number)
    {
        printf("enter the number from (1-100):\n ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("you have it in %d attempt\n", nguess);
        }
        nguess++;
    }
    return 0;
}