#include "main.h"

/**
 * _memset - Copies a specific byte to each element of an array.
 * @dest: Pointer to the memory area to fill.
 * @value: Byte value to set.
 * @n: Number of bytes to fill.
 * Return: A pointer to the filled memory area.
 */
char *_memset(char *dest, char value, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = value;
	}
	return (dest);
}

/**
 * _calloc - Allocates memory for an array of specified elements.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 * Return: A pointer to the allocated memory, or NULL if allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}
