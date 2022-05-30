#include "main.h"

/**
 * _pow_recursion - calculates the exponential of a number
 * @x: number
 * @y: number of power
 * Return: result of the calculation.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
