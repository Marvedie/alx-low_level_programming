#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 * Return: A pointer to the concatenated string, or NULL if allocation fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int size_s1 = 0, size_s2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size_s1] != '\0')
		size_s1++;

	while (s2[size_s2] != '\0')
		size_s2++;

	if (n > size_s2)
		n = size_s2;

	result = malloc((size_s1 + n + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < size_s1; i++)
		result[i] = s1[i];

	for (; i < (size_s1 + n); i++)
		result[i] = s2[i - size_s1];

	result[i] = '\0';

	return (result);
}
