#include <stdio.h>

int main(void)
{
    int num, row, col, space;
    num = get_int("Enter height \n");
    if (num < 0)
    {
    }

    do
    {
        printf("Enter a number greater than 0");
        num = get_int("Enter height\n");
    } while (num < 1);
    {
        for (row = 1; row <= num; row++)
        {
            for (space = 1; space <= (num - row); space++)
            {
                printf(" ");
            }

            for (col = 1; col <= (2 * row - 1); col++)
            {
                printf("#");
            }
            printf("\n");
        }
    }

    return 0;
}
