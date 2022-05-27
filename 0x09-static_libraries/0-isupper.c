#include "main.h"

/**
 * _isupper - check if the argument passed in
 * is a uppercase character
 *@c: the argument to be checked
 * Return: 1 if c is uppercase or 0 if c is not
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);

}
return (0);
}
