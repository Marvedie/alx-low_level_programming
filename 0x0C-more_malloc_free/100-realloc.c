#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory block to reallocate.
 * @old_size: Old size of the memory block.
 * @new_size: New size of the memory block.
 * Return: Pointer to the reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *reallocated;
	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	reallocated = malloc(new_size);

	if (reallocated == NULL)
		return (NULL);

	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(reallocated + i) = clone[i];
	}

	free(ptr);
	return (reallocated);
}
