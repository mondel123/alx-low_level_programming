#include "main.h"
/**
 * _memcpy - function that copies memory
 * @dest: copy to
 * @src: copy from
 * @n: no of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char src, unsigned in n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
