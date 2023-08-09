#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	if (*s1 == *s2)
		return (0);
	else
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		for (i = 0; i < 1000; i++)
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}

		return (*s1 - *s2);
	}
}
