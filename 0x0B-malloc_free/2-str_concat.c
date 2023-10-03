#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: pointer to new concat string
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int i1, i2, k, size;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i1 = 0; s1[i1]; i1++)
;
for (i2 = 0; s2[i2]; i2++)
;
size = i1 + i2 + 1;
s = malloc(sizeof(char) * size);
if (s == NULL)
{
return (NULL);
}
for (k = 0; k < size; k++)
{
k < i1 ? (s[k] = s1[k]) : (s[k] = s2[k - i1]);
}
return (s);
}
