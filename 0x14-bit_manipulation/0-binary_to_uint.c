#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - finds the loop in a linked list
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int h = 0;

	if (b == NULL)
		return (0);


	while (b[h] != '\0')
	{
		if (b[h] == '0')
			result <<= 1;
		else if (b[h] == '1')
		{
			result <<= 1;
			result |= 1;
		}
		else
			return (0);
		i++;
	}

	return (result);
}
