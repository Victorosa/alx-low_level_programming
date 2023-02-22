#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determine if number is positive or negative
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */

int positive_or_negative(int i)
{


	if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);

	return (0);
}
