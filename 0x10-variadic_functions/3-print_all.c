#include "variadic_functions.h"

/**
 * print_all - Prints values of different types.
 * @format: List of format specifiers for arguments.
 *
 */
void print_all(const char * const format, ...)
{
	va_list args_list;
	unsigned int format_index = 0, type_index, comma_needed = 0;
	char *str;
	const char valid_types[] = "cifs";

	va_start(args_list, format);

	while (format && format[format_index])
	{
		type_index = 0;
		while (valid_types[type_index])
		{
			if (format[format_index] == valid_types[type_index] && comma_needed)
			{
				printf(", ");
				break;
			}
			type_index++;
		}
		switch (format[format_index])
		{
		case 'c':
			printf("%c", va_arg(args_list, int)), comma_needed = 1;
			break;
		case 'i':
			printf("%d", va_arg(args_list, int)), comma_needed = 1;
			break;
		case 'f':
			printf("%f", va_arg(args_list, double)), comma_needed = 1;
			break;
		case 's':
			str = va_arg(args_list, char *), comma_needed = 1;
			if (!str)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		}
		format_index++;
	}

	printf("\n");
	va_end(args_list);
}

