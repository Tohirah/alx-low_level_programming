#include "main.h"

/**
 * swap_int - swipes value of 2 integer
 * @a: the pointerto value 1
 * @b: pointer to value 2
 *
 * Return: return 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
