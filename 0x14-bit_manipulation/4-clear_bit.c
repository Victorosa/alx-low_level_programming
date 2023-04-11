#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: number to convert
 * @index: index of the bit to set
 * Return: 1  or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;
	if (index > 32)
		return (-1);
        /* Create a mask with only the bit at the given index set to 0 */
	mask = 1 << index;
     /* Use bitwise AND to set the bit at the given index to 0 */
	*n &= ~mask;
	return (1);
}
