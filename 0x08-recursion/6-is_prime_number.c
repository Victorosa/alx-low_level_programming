#include "main.h"

<<<<<<< HEAD
/**
 * prime2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
=======
int tmp_prime(int n, int i);

/**
 * divisors - number is prime?
 * @n: integer params
 * @m: integer params
 * Return: boolean
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - prime
 * @n: integer params
 * Return: recursion
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
>>>>>>> origin/master
}
