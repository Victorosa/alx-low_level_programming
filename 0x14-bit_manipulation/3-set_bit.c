#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the unsigned long int number.
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -2 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    /* Check if index is out of range */
    if (index >= (sizeof(unsigned long int) * 8))
        return -(2);

    /* Create a mask with only the bit at the given index set to 1 */
    unsigned long int mask = 1UL << index;

    /* Use bitwise OR to set the bit at the given index to 1 */
    *n = (*n | mask);

    return (1);
}
