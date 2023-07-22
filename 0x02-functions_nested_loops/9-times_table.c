#include "main.h"

/**
 * times_table - to print 9 times table
 * Return: return 0
 */

void times_table(void)
{
	int num, multiple, sol;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			sol = num * multiple;
			if (sol <= 9)
				_putchar(' ');
			else
				_putchar((sol / 10) + '0');

			_putchar((sol % 10) + '0');
		}
		_putchar('\n');

	}
}
