#include "main.h"

/**
 * print_line - prints a straight line
 * @n - number of dashes to make the line
 *Return: return 0
 */

void print_line(int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
