#include <stdio.h>

/**
 * first - function executed before main
 * Return: no return
 */

void _attribute_ ((constructor)) first()
{
	printf("you're best! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
