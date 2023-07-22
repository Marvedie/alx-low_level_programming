#include "main.h"

/**
 * print_number - prints an integer.
 * @num: input integer.
 *
 * Return: no return.
 */
void print_number(int num)
{
	unsigned int abs_num, divisor, count;

	if (num < 0)
	{
		_putchar('-');
		abs_num = (unsigned int)(-num);
	}
	else
	{
		abs_num = (unsigned int)num;
	}

	divisor = abs_num;
	count = 1;

	while (divisor > 9)
	{
		divisor /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((abs_num / count) % 10) + '0');
	}
}
