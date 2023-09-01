#include <stdio.h>

/**
 * main - Write a program that prints name followed by a new line.
 * Renaming the program should update the name without further compilation
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: NULL
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
