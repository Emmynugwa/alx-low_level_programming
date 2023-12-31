#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 * Return: The converted integer
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    /* Check for sign */
    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }

    /* Iterate through the string */
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
        }
        else
        {
            /* Stop at the first non-digit character */
            break;
        }
        i++;
    }

    return sign * result;
}
