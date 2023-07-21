#include "main.h"

/**
 * more_numbers - print 0 10 14, ten times
 * Return: return 0
 */

void more_numbers(void)
{
	int  num, counter;

	for (counter = '0'; counter <= '10'; counter++)
	{
		for (num = '0'; num <= '14'; num++)
		{
			if (num <= 9)
				_putchar(num % 10 + '0');
			else
				_putchar(num / 10 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
