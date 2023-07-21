#include "main.h"

/**
 * more_numbers - print 0 10 14, ten times
 * Return: return 0
 */

void more_numbers(void)
{
	char num, counter;

	for (counter = '0'; counter <= '10'; counter++)
	{
		for (num = '0'; num <= '14'; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
