#include "main.h"

/**
 * print_numbers - prints from 1 to 9
 * Return: return 0
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
