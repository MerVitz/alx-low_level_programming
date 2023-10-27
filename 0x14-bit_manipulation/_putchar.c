#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * returning: 1 on success
 * On error, -1 is returned, and error number is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

