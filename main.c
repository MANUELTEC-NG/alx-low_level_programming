
#include <stdio.h>
#include "main.h"
#include "0x03-debugging/main.h"
#include "0x04-more_functions_nested_loops/main.h"
#include "0x05-pointers_arrays_strings/main.h"
#include <stdlib.h>
#include <string.h>


void reset_to_98();
int _strlen( char *str);
void swap_it(int q, int h);
void _puts(char *a);
void puts_half(char *s);
char *_strcopy(char *destination, char *source);
char * _strcatt(char *dest, char *src);
//char print_rev2(char *ch);
char *copy_str(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);


/* this portion demonstrate function as pointer */
void one(int v);
void two(int v);
void other(int v);
void func(int val);
void (*func_ptr)(int pval);


int main() {
char buffer[98];
char b = 'b';

printf("%s", _memset(buffer, b, 98));

return (0);
}

void reset_to_98(int *addr_of_int)
{


}

int _strlen(char *str)
{
int idx = 0;
int length = 0;
while (*(str + idx) != '\0')
{
length += 1;
idx += 1;
}
return (length);
}

void _puts(char *a)
{
int idx = 0;
while (*(a + idx) != '\0')
{
printf("%c", *(a + idx));
idx += 1;
}
putchar('\n');
}

void print_rev(char *ch)
{
int slenght = 0;
char last_letter;
int idx = 0;
while (ch[idx] != '\0')
{
slenght += 1;
last_letter = ch[idx];
idx += 1;
}
int i = 0;
int last_index = slenght-1;
while (i < slenght)
{
printf("%c", *(ch + last_index));
i += 1;
last_index -= 1;
}
putchar('\n');
}

void puts_half(char *s)
{
int string_lenght = _strlen(s);
int half = string_lenght / 2;
if (string_lenght % 2 != 0) {
half = (string_lenght - 1) / 2;
}

printf("Half is %d\n", half );
while (s[half] != '\0')
{
printf("%c", s[half]);
half += 1;
}
putchar('\n');

}

char *_strcopy(char *destination, char *source)
{

int times = _strlen(source);

int i = 0;
//int index = 0;
while (i < times)
{
 destination[i] = *(source + i);

i += 1;
//index += 1;
}

return (destination);
}


void func(int v)
{

if (v == 1)
{
func_ptr = one;
printf("Function one assigned \n");
}
else if (v == 2) {
func_ptr = two;
printf("Function 'two' assigned \n");
}
else
func_ptr = other;

func_ptr(v);

return;
}

void one(int val)
{
printf("You Entered %d \n", val);
}

void two(int val)
{
printf("You Entered %d \n", val);
}

void other(int val)
{
printf("You Entered %d \n", val);
}

char *copy_str(char *dest, char *src)
{

dest = (char *) malloc(strlen(src));
printf("%s", dest);

}

char *_memset(char *s, char b, unsigned int n)
{
for (int i = 0; i < n; i+= 1)
{
s[i] = b;

}
return (s);
}