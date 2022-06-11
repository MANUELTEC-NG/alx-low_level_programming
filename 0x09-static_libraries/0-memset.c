#include "stdio.h"

/**
 * This function writes bytes to memory address
 *
 * @s: pointer to address where the bytes are going to be written
 * @b: the character to write to the memory address
 * @n: the number of bytes to write
 *
 * @return - (s) the pointer to the address
 */

char *_memset(char *s, char b, unsigned int size)
{
for (unsigned int i = 0; i < size; i++)
{
s[i] = b;

}
return (s);

}
