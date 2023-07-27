#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of characters to concatenate from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0, src_index = 0;

    // Find the end of the dest string
    while (*(dest + dest_len) != '\0')
    {
        dest_len++;
    }

    // Append at most n characters from the src string to the dest string
    while (src_index < n && *(src + src_index) != '\0')
    {
        *(dest + dest_len) = *(src + src_index);
        dest_len++;
        src_index++;
    }

    // Add the null terminator to the concatenated string
    *(dest + dest_len) = '\0';

    return dest;
}
