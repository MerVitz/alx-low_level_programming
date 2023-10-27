#include "main.h"

/**
 * get_endianness - pProgram function checking the endianness
 * Return: 0 if big endian, else 1
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}

