#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: number to convert
 * @index: index of the bit to set
 * Return: 1  or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int masks;

	if (index > 64)
		return (-1);
	masks = 1 << index;
	*n &= ~masks;
	return (1);
}