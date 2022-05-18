#include "main.h"
#include <stdio.h>

/**
 *prints number 1-100
 * main - Entry piont
 * Return: Always 0
 */
int fizz_buzz(void)
{

for (int i = 1; i < 100 ; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
}
printf("Buzz\n");

return (0);
}
