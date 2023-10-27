#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - This program function sets the value of function to 0, thereby clearing it
 * @n: parameter
 * @index: index
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

