#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor_result = n ^ m; /* XOR the two numbers */
    unsigned int counts = 0; /* Counter for the number of bits to flip */

    /* Count the number of set bits in the XOR result */
    while (xor_result > 0)
    {
        /* Increment the count if the least significant bit is set */
        counts += xor_result & 1;
        /* Shift the XOR result to the right by 1 bit */
        xor_result >>= 1;
    }

    return (counts);
}
