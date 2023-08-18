#include "variadic_functions.h"
/**
 * print_strings - prints strings.
 * @separator: string to be printed.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */

void modified_print_strings(const char *new_separator, const unsigned int new_n, ...)
{
    va_list new_valist;
    unsigned int new_i;
    char *new_str;

    va_start(new_valist, new_n);

    for (new_i = 0; new_i < new_n; new_i++)
    {
        new_str = va_arg(new_valist, char *);

        if (new_str)
            printf("%s", new_str);
        else
            printf("(nil)");

        if (new_i < new_n - 1)
            if (new_separator)
                printf("%s", new_separator);
    }

    printf("\n");
    va_end(new_valist);
}
