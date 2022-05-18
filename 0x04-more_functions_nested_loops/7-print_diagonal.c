#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n:  input parameter
 * Return: Always 0
 */
void print_diagonal(int n)
{


if (n > 0)
{
for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
else
_putchar('\n');
}
