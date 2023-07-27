#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	/* Find the end of the dest string */
	while (*(dest + count) != '\0')
	{
		count++;
	}

	/* Append the src string to the dest string */
	while (*(src + count2) != '\0')
	{
		*(dest + count) = *(src + count2);
		count++;
		count2++;
	}

	/* Add the null terminator to the concatenated string */
	*(dest + count) = '\0';

	return (dest);
}
