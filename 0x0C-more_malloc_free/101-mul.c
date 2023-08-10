#include "main.h"

/**
 * main - Multiplies two positive numbers.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	unsigned long multiplication_result;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	multiplication_result = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", multiplication_result);

	return (0);
}
