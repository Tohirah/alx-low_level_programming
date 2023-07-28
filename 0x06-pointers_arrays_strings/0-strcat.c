#include "main.h"

/**
 * _strcat - concatenate 2 string without inbluilt function
 * @dest: first string passed
 * @src: second string to be concatenated
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
