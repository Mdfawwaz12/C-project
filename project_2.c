#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeAndWater(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
        else if (you == 'w' && comp == 's')
        {
            return -1;
        }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
        else if (you == 'g' && comp == 's')
        {
            return 1;
        }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
        else if (you == 'g' && comp == 'w')
        {
            return -1;
        }
}
    int main()
    {
        char you, comp;
        int number = rand() % 100 + 1;
        srand(time(0));
        printf("the number is %d\n", number);
        printf("enter snake 's' water 'w' gun 'g'");
        scanf("%c",&you);
        if (number < 33)
        {
            comp = 's';
        }
        else if (number > 33 && number < 66)
        {
            comp = 'g';
        }
        else
        {
            comp = 'w';
        }
        int num = snakeAndWater(you, comp); 
        if (num ==0)
        {
            printf("game draw !.\n");
        }
        else if (num == 1)
        {
            printf("you win!.\n");
        }
        else
        {
            printf("you lose!.\n");
        }
        printf("you have chosen %c and comp has chosen %c\n", you, comp);
        return 0;
    }
