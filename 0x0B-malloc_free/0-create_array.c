#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: size of the array
 * @c: character to be specified
 *
 * Return: return pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char* k;

	k = malloc(sizeof(c) * size);

	if (k == NULL)
		return (NULL);

	int j;

	for (j = 0; j < size; j++)
	{
		k[j] = c;
	}

	return (k);
}
