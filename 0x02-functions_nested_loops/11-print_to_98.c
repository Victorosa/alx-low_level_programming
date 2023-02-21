#include "main.h"

/**
 * print_to_98 - get the absolute value of an integer
 * @n: accept an integer
 *
 * Return: 1 or 0
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
		else if (n > 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar(98 + '0');
}
