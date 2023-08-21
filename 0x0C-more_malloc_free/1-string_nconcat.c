#include "main.h"

/**
* string_nconcat - Concatenate two strings
* @s1: string1
* @s2: string2
* @n: maximum number of bytes of string2 to concatenate to string1.
*
*Return: Null or pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	newstring = malloc(sizeof(char) * (len + 1));

	if (newstring == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		newstring[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		newstring[len++] = s2[index];

	newstring[len] = '\0';

	return (newstring);
}
