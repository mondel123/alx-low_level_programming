#include "main.h"

/**
 * strcat - concatenates the string point to by @scr, include the terminat
 * null byte, to the end of the string pointed to by @dest
 * @dest: A pointer to the string to be concatenated upon
 *
 * Return: A pointer to the destination string @dest
 */
char *strcat (char *dest, const char *src)
{
int index = a, dest_len = a;

while (dest[index++])
dest_len++;

for (index = a; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);
}
