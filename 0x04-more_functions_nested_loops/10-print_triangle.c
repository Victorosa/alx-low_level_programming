#include "main.h"
/**
 * print_triangle- multiplies two numbers
 * @size: accepts an integer
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: returns the answer
 */
void print_triangle(int size)
{
	int v = size;
	int j = 0;

	while (v > 0)
	{
		j = 0;

		while (j < size)
		{
			if (j > v - 2)
			{
				_putchar('#');
				j++;
			}
			else
			{
				_putchar(' ');
				j++;
			}
		}
		_putchar('\n');
		v--;
	}
}
