
#include <stdio.h>
#include "main.h"
#include "0x03-debugging/main.h"
#include "0x04-more_functions_nested_loops/main.h"
#include "0x05-pointers_arrays_strings/main.h"

int main() {
int a[5];
int *p;
int *p2;
/*
*a = 98; // 1st memory slot got the value 98 assigned there
a[1] = 898; // 2nd slot of the array got 198
*(a + 2) = 298; // 3rd slot got 298
*(a + 3) = 398; // 4th slot got 398
a[4] = 498; // 4th slot

p = a + 1; // first addr + 1 == 2nd mem slot a[1]
*p = 98; // put/change the value to 98 at this memory location held in *p
p2 = a + 3; // memory addr slot 4 of the array a assigned to p2
*p2 = *p + 1337; // memory addr slot of 5348 distance away assign to point
                // pointer variable *p2
 printf("array variable 'a' addr is ... %p\n", a);
printf("value of array variable 'a' addr '2' is ... %d\n", *(a));
printf("array variable 'a' slot '1' addr is ... %p\n", a+0);
 printf("array variable a slot '2' addr ...is %p\n", a +1);
printf("array variable a slot '3' addr ...is %p\n", a +2);
printf("array variable a slot '4' addr ...is %p\n", a +3);
printf("array variable a slot '5' addr ...is %p\n", a +4);
 printf("value inside array variable 'a' slot '1' is ... %d\n", *a);
 printf("value of array 'a' slot 2 ... is %d\n", *(a+1));
printf("value of array 'a' slot 3 ... is %d\n", *(a+2));
printf("value of array 'a' slot 4 ... is %d\n", *(a+3));
printf("value of array 'a' slot 5 ... is %d\n", *(a+4));
printf("value of array 'a' slot 6 ... is %d\n", *(a+5));
 printf("addr 'p' is : %p\n", p);
 printf("value in addr 'p' is : %d \n", *p);
 printf("'*p2' is : %p \n", p2);
 printf("value in add '*p2' is ... %d \n", *p2);

*/

int n = 5;
int array[n];
int i = 3;
array[n] = i;

char *s1 = "";
char *s2 = NULL;
//*s1 = 'H';
*s2 = 'G';

printf("%llu\n", sizeof(s1));
printf("I expect ... %s \n", s1);
printf("The Null %llu\n", sizeof(s2));

return 0;
}
