#include"main.h"

/**
 * _islower - checks if character
 *           is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if `c` is lowercase
 *         otherwise returns 0 (Success)
*/

int to_lower(int c)
{
    if (c >= 97 && c <= 122)
        return (1);
    return (0);
}