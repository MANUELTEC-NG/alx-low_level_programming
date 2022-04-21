#include "main.h"

/**
* print_most_numbers - print 0-9 except 2 and 4
*
* Return: 0 indicating Successful run
*/

void print_most_numbers(void)
{
int i = 48;
int int_two = 50;
int int_four = 52;
while (i <= 57)
{
if (i != int_two  && i != int_four)
{
_putchar(i);

}
i++;

}
_putchar('\n');

}
