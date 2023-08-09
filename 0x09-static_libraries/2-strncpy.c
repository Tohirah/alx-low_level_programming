#include "main.h"

/**
 * _strncpy - concatenate strings but limited bytes
 * @dest: first string passed
 * @src: second string to be concatenated
 * @n: the number of bytes
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
