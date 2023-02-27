#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchars(str);
	}
	_putchar('\n');
}
