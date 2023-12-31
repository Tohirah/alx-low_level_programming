#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: return NULL or concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int j, k, y, z;
	char *newstr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	for (j = 0; s1[j] != '\0'; j++)
		;

	for (k = 0; s2[k] != '\0'; k++)
		;

	newstr = malloc(sizeof(char) * (j + k + 1));

	if (newstr == NULL)
	{
		free(newstr);
		return (NULL);
	}


	for (y = 0; y < j; y++)
	{
		newstr[y] = s1[y];
	}


	for (z = 0; z <= k; z++)
	{
		newstr[y] = s2[z];
		y++;
	}

	return (newstr);
}
