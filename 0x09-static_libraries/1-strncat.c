#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination input value
 * @src: source input value
 * @n: amount of bytes used from src
 *
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int y, z;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}

	while (z < n && src[z] != '\0')
	{
		dest[y] = src[z];
		y++;
		z++;
	}

	dest[y] = '\0';

	return (dest);
}
