#include <stdio.h>
/**
 * bfr_main - function to execute before main
 *
 */
void __attribute__ ((constructor)) bfr_main()
{
printf("You're beat! and yet, you must allow");
printf(",\nI bore my house upon my back !\n ");
}
