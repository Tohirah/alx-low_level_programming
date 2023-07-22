#include "main.h"

/**
 *print_square - print a square
 *@size: size of the square
 *Return- return 0
 */

void print_square(int size)
{
	int count, k;

	for (k = 1; k <= size; k++)
	{
		for (count = 1; count <= size; count++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	_putchar('\n');
}
