#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
char last_alpha;
last_alpha = 'z';

while (last_alpha >= 'a')
{
putchar(last_alpha);
last_alpha -= 1;
}
putchar('\n');

return (0);

}
