#include <stdio.h>
/**
 * main - print lowercase alphabets except
 * character 'e' and 'q'
 * Return: Always 0 (Success)
 */

int main(void)
{
char a = 'a';

while (a <= 'z')
{
if (a != 'e' && a != 'q')
{
putchar(a);

}
a++;

}
return (0);

}
