#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int numb;

	numb = 0;
	if (!b)
		return (0);
	for (v = 0; b[v] != '\0'; v++)
	{
		if (b[v] != '0' && b[v] != '1')
			return (0);
	}
	for (v = 0; b[v] != '\0'; v++)
	{
		numb <<= 1;
		if (b[v] == '1')
			numb += 1;
	}
	return (numb);
}

