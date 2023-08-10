#include "main.h"

/**
 * _memset - Copies a specific character to each element of an array.
 * @dest: Pointer to the memory area to fill.
 * @ch: Character value to set.
 * @n: Number of bytes to fill.
 * Return: A pointer to the filled memory area.
 */
char *_memset(char *dest, char ch, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = ch;
	}
	return (dest);
}

/**
 * _calloc - Allocates memory for an array using malloc.
 * @num_elements: Number of elements in the array.
 * @element_size: Size of each element.
 * Return: A pointer to the allocated memory, or NULL if allocation fails.
 */
void *_calloc(unsigned int num_elements, unsigned int element_size)
{
	void *allocated_memory;

	if (num_elements == 0 || element_size == 0)
		return (NULL);
	
	allocated_memory = malloc(num_elements * element_size);

	if (allocated_memory == NULL)
		return (NULL);

	_memset(allocated_memory, 0, (num_elements * element_size));
	return (allocated_memory);
}
