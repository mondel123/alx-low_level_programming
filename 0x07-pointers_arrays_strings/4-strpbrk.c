#include "main'h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: string to check against
 *
 * Return: the string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
	for (j = 0; accept[j]; j++)
	{
		if (s[i] == accept[j])
		{
			break;
		}
	}
	if (accept[j])
		return (s + i);
}
return (0);
}
