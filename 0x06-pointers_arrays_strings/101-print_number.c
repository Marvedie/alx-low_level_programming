#include "main.h"

/**
 * print_number - Prints an integer.
 * @num: Input integer.
 *
 * Return: No return.
 */
void print_number(int num)
{
	unsigned int num_abs, divisor, count;

	if (num < 0)
	{
		_putchar('-');
		num_abs = num * -1;
	}
	else
	{
		num_abs = num;
	}

	divisor = num_abs;
	count = 1;

	while (divisor > 9)
	{
		divisor /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((num_abs / count) % 10) + '0');
	}
}
