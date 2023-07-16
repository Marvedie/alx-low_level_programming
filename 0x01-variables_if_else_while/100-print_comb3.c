#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int tens_digit, ones_digit;

    tens_digit = 48;
    ones_digit = 48;

    while (tens_digit < 58)
    {
        ones_digit = 48;
        while (ones_digit < 58)
        {
            if (tens_digit != ones_digit && tens_digit < ones_digit)
            {
                putchar(tens_digit);
                putchar(ones_digit);

                if (ones_digit == 57 && tens_digit == 56)
                {
                    break;
                }

                putchar(',');
                putchar(' ');
            }
            ones_digit++;
        }
        tens_digit++;
    }

    putchar('\n');
    return 0;
}
