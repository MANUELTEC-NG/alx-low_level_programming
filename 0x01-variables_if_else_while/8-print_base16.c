#include <stdio.h>

/**
*main - prints base 16 numbers 0-9 followed by a-e
*
*Return: Always 0 (Success)
*/

int main(void)
{
char base_10_digit = 48;
int counter;
counter = 0;
char alpha;
alpha = 97;

while (base_10_digit <= 57 || alpha <= 'e')
{

if (counter < 10)
{
putchar(base_10_digit);
base_10_digit++;
counter += 1;
}

else if (counter >= 10)
{
putchar(alpha);
alpha += 1;
}
}
putchar('\n');

return (0);

}
