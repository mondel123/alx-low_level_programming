#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - printif the number is positive, zero, or negative
*
* Description: using the main function
* this program prints "programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your goes there */
if (n > 0)
{
        printf("%d is positive\n", n);
}
else if (n == 0)
{
        printf("%d is positive\n", n);
}
else if (n < 0)
{
        printf("%d is positive\n", n);
}
return (0);
