#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to dimensional arrray
 * @width: width of the array
 * @height: height of the array
 *
 * Return: return NULL or pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **newarr;
	int y, z;

	if (width < 1 || height < 1)
		return (NULL);

	newarr = malloc(height * sizeof(int *));

	if (newarr == NULL)
	{
		free(newarr);
		return (NULL);
	}

	for (y = 0; y < height; y++)
	{
		newarr[y] = malloc(width * sizeof(int));

		if (newarr[y] == NULL)
		{
			for (y--; y >= 0; y--)
				free(newarr[y]);

			free(newarr);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
		for (z = 0; z < width; z++)
			newarr[y][z] = 0;

	return (newarr);
}
