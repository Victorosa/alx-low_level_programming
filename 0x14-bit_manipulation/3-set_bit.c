#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given position
 *@n: number to change
 *@index: index of the bit to set
 *Return: 1 if succeed or -1 if fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;
 /* Create a mask with only the bit at the given index set to 1 */
	if (index > 32)
		return (-1);

	mask = 1 << index;
    /* Use bitwise OR to set the bit at the given index to 1 */
	*n = *n | mask;
	return (1);
}
