#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @str1: First string.
 * @str2: Second string.
 *
 * Return: 0 if str1 and str2 are equal, a number != 0 if they are different.
 */
int _strcmp(char *str1, char *str2)
{
    int i = 0, diff = 0;

    while (diff == 0)
    {
        if ((*(str1 + i) == '\0') && (*(str2 + i) == '\0'))
            break;
        diff = *(str1 + i) - *(str2 + i);
        i++;
    }

    return diff;
}
