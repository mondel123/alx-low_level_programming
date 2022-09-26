#include "main.h"

/**
 * _memset - fills a block of memory
 * @s: start address
 * @b: value
 * @n: number of bytes
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned in n)
{
int i = 0;

for (; n > 0; i++)
{
s(i) = b;
n--;
}
return (s);
}
