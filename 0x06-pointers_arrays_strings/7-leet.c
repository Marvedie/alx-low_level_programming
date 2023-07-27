#include "main.h"

/**
 * leet - Encodes a string into "1337" (leet speak).
 * @str: Input string.
 *
 * Return: The pointer to the updated string.
 */
char *leet(char *str)
{
    int index = 0, i;
    int lowercase[] = {'a', 'e', 'o', 't', 'l'};
    int uppercase[] = {'A', 'E', 'O', 'T', 'L'};
    int leet_numbers[] = {'4', '3', '0', '7', '1'};

    while (*(str + index) != '\0')
    {
        for (i = 0; i < 5; i++)
        {
            if (*(str + index) == lowercase[i] || *(str + index) == uppercase[i])
            {
                *(str + index) = leet_numbers[i];
                break;
            }
        }
        index++;
    }

    return str;
}
