#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int number.
 * @index: The index of the bit to get, starting from 0.
 *
 * Return: The value of the bit at the given index (0 or 1), or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int mask;

    /* Check if index is out of range */
    if (index >= (sizeof(unsigned long int) * 8))
        return -1;

    /* Create a mask with only the bit at the given index set to 1 */
    mask = 1UL << index;

    /* Use bitwise AND to get the value of the bit at the given index */
    if ((n & mask) != 0)
        return 1;
    else
        return 0;
}
