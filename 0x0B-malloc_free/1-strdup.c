#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to a new string
 * @str: string
 * Return: char*
 */
char *_strdup(char *str)
{
char *s;
unsigned int i, j;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
;
i++;
if (i < 1)
{
return (NULL);
}
s = malloc(sizeof(char) * i);
if (s == NULL)
{
free(s);
return (NULL);
}
for (j = 0; j < i; j++)
{
s[j] = str[j];
}
s[j] = '\0';
return (s);
}
