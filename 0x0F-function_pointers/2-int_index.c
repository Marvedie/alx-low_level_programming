#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @arr: array to search in
 * @sz: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *arr, int sz, int (*cmp)(int))
{
	int idx;

	if (arr && cmp)
	{
		for (idx = 0; idx < sz; idx++)
		{
			if (cmp(arr[idx]) != 0)
				return (idx);
		}
	}

	return (-1);
}
