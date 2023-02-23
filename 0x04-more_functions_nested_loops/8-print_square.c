#include "main.h"
/**
 * print_square- multiplies two numbers
 * @size: accepts an integer
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: returns the answer
 */

void print_square(int size)
{
	int v = size;

	while (size > 0)
	{
		int s = v;

		while (s > 0)
		{
			_putchar('#');
			s--;
		}
		_putchar('\n');
		size--;
	}
}

