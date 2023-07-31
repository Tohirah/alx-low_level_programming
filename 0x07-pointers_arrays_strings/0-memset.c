#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer o the destination object
 * @b: value to be filled
 * @n: number of bytes to be filled
 *
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s++ = b;
	}
	return (s);
}
