#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The binary number string.
 *
 * Return: The converted unsigned int (Success), 0 (Failure).
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    unsigned int bit;

    if (b == NULL)
        return 0;

    for (; *b != '\0'; b++)
    {
        if (*b != '0' && *b != '1')
            return 0;

        bit = *b - '0';
        result = (result << 1) | bit;
    }

    return result;
}

