#include "main.h"

/**
<<<<<<< HEAD
 * _pow_recursion - raises x to the power of y
 * @x: Number Integer
 * @y: Power
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
=======
 * _pow_recursion - pow recursion
 * @x: integer params
 * @y: integer paramtr
 * Return: recursion
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
>>>>>>> origin/master
	return (x * _pow_recursion(x, y - 1));
}
