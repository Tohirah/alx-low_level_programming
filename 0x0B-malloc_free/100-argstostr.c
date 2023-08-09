#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments
 * @ac: count
 * @av: vector
 *
 * Return: return NULL or pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *newstr;
	int j, k, y, z;

	if (ac == 0)
		return (NULL);

	for (j = k = 0; k < ac; k++)
	{
		if (av[k] == NULL)
			return (NULL);

		for (y = 0; av[k][y] != '\0'; y++)
			j++;
		j++;
	}

	newstr = malloc((j + 1) * sizeof(char));

	if (newstr == NULL)
	{
		free(newstr);
		return (NULL);
	}

	for (k = y = z = 0; z < j; y++, z++)
	{
		if (av[k][y] == '\0')
		{
			newstr[z] = '\n';
			k++;
			z++;
			y = 0;
		}
		if (z < j - 1)
			newstr[z] = av[j][y];
	}
	newstr[z] = '\0';

	return (newstr);
}
