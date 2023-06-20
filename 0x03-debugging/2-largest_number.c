#include "main.h"

/**
 * largest_number - Find the largest of three numbers
 * @a: First number
 * @b: Second number
 * @c: Third number
 *
 * Return: The largest number
 */
int largest_number(int a, int b, int c)
{
    int largest = a;

    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    return largest;
}
