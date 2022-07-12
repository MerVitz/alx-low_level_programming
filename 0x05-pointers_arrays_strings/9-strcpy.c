#include "main.h"



/**
 * _strcpy - copy string
 * destination: dest
 * source: src
 * Return: Character
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
