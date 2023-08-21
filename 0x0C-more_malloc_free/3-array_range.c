#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: smallest number
* @max: lagrest value
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *intarr;
	int i, j = 0;

	if (min > max)
		return (NULL);
	intarr = malloc(sizeof(*intarr) * ((max - min) + 1));
	if (intarr != NULL)
	{
		for (i = min; i <= max; i++)
		{
			intarr[j] = i;
			j++;
		}
		return (intarr);
	}
	else
		return (NULL);

}
