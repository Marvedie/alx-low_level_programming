#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates an array of chars 
  *and initializes array  with a specific char.
  *@size: size of array.
  *@c: char to initialize the array.
  *
  *Return: NULL if it fails or pointer to array.
  */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/* check if successful */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);

}
