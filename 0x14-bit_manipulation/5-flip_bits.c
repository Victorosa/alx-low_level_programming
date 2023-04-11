#include "main.h"
/**
 * flip_bits - Returns the number of bits to convert in the second
 * number
 * @n: first number
 * @m: second number
 * Return: the number of bytes to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p;
	unsigned int to_ret;

	p = n ^ m;

	count = 0;
	while (p > 0)
	{
		if ((p & 1) != 0)
			count++;
		p = p >> 1;
	}
	return (count);
}
