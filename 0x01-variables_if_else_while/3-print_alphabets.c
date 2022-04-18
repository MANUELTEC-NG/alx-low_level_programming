#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints lowercase alphabets and
 * immediately followed by uppercase alphabets
 *
 * @return : Always 0 (Success)
 */
int main()
{
char a = 'a';
char upper_char = 'A';

while (a <= 'z')
{
putchar(a);

if (a == 'z')
{
while (upper_char <= 'Z')
{
putchar(upper_char);
upper_char++;

}

}
a++;

}
putchar('\n');

return 0;
}
