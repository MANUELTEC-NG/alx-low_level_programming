#include "main.h"
#include <stdio.h>

/**
* more_numbers - prints 0-14 ten times
*
* Return: 0 indicating the function ended successfully
*/

void more_numbers(void)
{
int index = 0;

while (index <= 9)
{
int i = 0;
int digit_zero = 48;
int value_0 = 0;
int one = 49;
int second_zero = 48;

while (i < 14)
{

if (value_0 > 9)
{
_putchar(one);
_putchar(second_zero);
second_zero += 1;

}
else
{
print_numbers();

}
i += 1;
digit_zero += 1;
value_0 += 1;

}
index += 1;
_putchar('\n');

}
}
