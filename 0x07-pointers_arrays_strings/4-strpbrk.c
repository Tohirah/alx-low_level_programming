#include "main.h"

/**
 * _strpbrk - searches a string for set of bytes
 * @s: string to be checked
 * @: characters to match
 *
 * Return: return a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int y,z;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[y] == accept[z])
			{
				break;
			}
		}
		if (accept[z] != '\0')
		{
			return (s[y]);
		}
	}
	return (0);
}
