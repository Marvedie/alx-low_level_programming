#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int first_number, second_number;

    for (first_number = 0; first_number < 100; first_number++)
    {
        for (second_number = 0; second_number < 100; second_number++)
        {
            if (first_number < second_number)
            {
                putchar((first_number / 10) + 48);
                putchar((first_number % 10) + 48);
                putchar(' ');
                putchar((second_number / 10) + 48);
                putchar((second_number % 10) + 48);

                if (first_number != 98 || second_number != 99)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');
    return 0;
}
