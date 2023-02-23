#include <stdio.h>
#include "main.h"

/**
 * get_length - gets the length in power
 * @n: accept an integer
 *
 * Return: length
 */

int get_length(int n)
{
	int i = 1;

	while (n > 0)
	{
		n = n / 10;
		i = i * 10;
	}
	return (i / 10);
}

/**
 * print_number- print numbers
 * @n: length and width of square
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		int length = get_length(n);

		while (length > 0)
		{
			int d = n / length;

			_putchar(d + 48);
			n = n - (d * length);
			length = length / 10;
		}
	}
}
