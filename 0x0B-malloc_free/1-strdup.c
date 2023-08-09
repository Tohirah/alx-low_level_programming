#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns newly allocated space
 * @str: string to be copied
 *
 * Return: return NULL or pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *newstr;
	int j, k;
	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	newstr = malloc(sizeof(char) * (j + 1));

	if (newstr == NULL)
		return (NULL);

	for (k = 0; k <= j; k++)
	{
		newstr[k] = str[k];
	}

	return (newstr);
}
