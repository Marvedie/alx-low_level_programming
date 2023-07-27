#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: Input string.
 *
 * Return: The pointer to the updated string.
 */
char *cap_string(char *str)
{
    int index = 0, i;
    int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

    // Capitalize the first letter of the string if it is lowercase
    if (*(str + index) >= 'a' && *(str + index) <= 'z')
        *(str + index) = *(str + index) - 32;

    index++;
    while (*(str + index) != '\0')
    {
        // Check if the character is a separator for words
        for (i = 0; i < 13; i++)
        {
            if (*(str + index) == separators[i])
            {
                // Capitalize the next letter if it is lowercase
                if (*(str + (index + 1)) >= 'a' && *(str + (index + 1)) <= 'z')
                    *(str + (index + 1)) = *(str + (index + 1)) - 32;
                break;
            }
        }
        index++;
    }

    return str;
}
