#include <stdio.h>
/**
 * main - prints name of program
 * @argc: argument count
 * @argv: argument vector
 * Return:0
 */
int main(int argc, char *argv[])
{
argc--;
printf("%s\n", argv[0]);
return (0);
}
