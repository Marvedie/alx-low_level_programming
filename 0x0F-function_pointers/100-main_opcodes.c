#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_bytes, idx;
	char *byte_array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	byte_array = (char *)main;

	for (idx = 0; idx < num_bytes; idx++)
	{
		if (idx == num_bytes - 1)
		{
			printf("%02hhx\n", byte_array[idx]);
			break;
		}
		printf("%02hhx ", byte_array[idx]);
	}
	return (0);
}
