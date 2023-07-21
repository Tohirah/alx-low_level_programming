#include "main.h"

/**
 * print_number - prints an integer with _putchar
 * @n - integer to be printed
 */

void print_number(int n)
{
	char num = n + '0';

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
