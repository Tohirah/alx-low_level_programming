#include "main.h"

/**
 * _strcat - concatenate 2 string without inbluilt function
 * @dest: first string passed
 * @src: second string to be concatenated
 * @n: number of n bytes to concatenate
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
