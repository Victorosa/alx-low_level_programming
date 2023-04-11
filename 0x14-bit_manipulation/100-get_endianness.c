#include "main.h"
/**
  *get_endianness - determines the endianness of a machine.
  *
  *Return: 0 big endian, 1 little endian.
  */
int get_endianness(void)
{
	unsigned int y = 0x73432123;

	char *c = (char *)&y;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
