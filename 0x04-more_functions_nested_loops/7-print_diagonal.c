#include "main.h"

/**
 * print_diagonal - prints diagonally using space
 * @n: number of times character should be printed
 * Return: return 0
 */

void print_diagonal(int n)
{
	int count;

	for (count = 0; count <= n; count++)
	{
		int k;

		for (k = 1; k <= count; k++)
		{
			_putchar(' ');
		}
		_putchar('$');
		_Putchar('\n');
	}
	_putchar('\n');
}