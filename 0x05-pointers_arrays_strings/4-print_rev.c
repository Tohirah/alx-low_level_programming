#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: return 0
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	int rev;

	for (rev = i; rev <= 0; rev--)
	{
		_putchar(s[rev]);
	}

	_putchar('\n');
}
