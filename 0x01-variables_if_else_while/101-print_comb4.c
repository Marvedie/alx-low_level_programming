#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int hundreds_digit, tens_digit, ones_digit;

    for (hundreds_digit = 48; hundreds_digit < 58; hundreds_digit++)
    {
        for (tens_digit = 49; tens_digit < 58; tens_digit++)
        {
            for (ones_digit = 50; ones_digit < 58; ones_digit++)
            {
                if (ones_digit > tens_digit && tens_digit > hundreds_digit)
                {
                    putchar(hundreds_digit);
                    putchar(tens_digit);
                    putchar(ones_digit);

                    if (hundreds_digit != 55 || tens_digit != 56)
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    putchar('\n');
    return 0;
}
