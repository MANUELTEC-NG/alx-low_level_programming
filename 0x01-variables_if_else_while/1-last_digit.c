#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - Print to the console if n is greater than 5, 0 or less than 6 but not zero
* Return: Always 0 (Success)
*/

int main (void)
{
int n;
srand(time(o));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of n is %d and is greater than 5\n", n);

}
else if (n == 0)
{
printf("Last digit of n is %d and is 0\n", n);

}
else if (n < 6 && n != 0)
{
printf("The last digit of n is %d and is less than 6 and not 0\n", n);

}

return (0);
}
