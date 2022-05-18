#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n:.input integer parameter
 *
 *
 */
void print_number101(int n)
{
unsigned int i = n;

if (n < 0)
{
putchar(45);
i = -i;
}
if (i / 10)
{
//print_number(i / 10);
}
putchar(i % 10 + '0');
}
