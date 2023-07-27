#include "main.h"

/**
 * _isupper - function prototype that checks for uppercase character.
 * @c: input character
 * Return: 1 if c is uppercase or 0 otherwise.
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}