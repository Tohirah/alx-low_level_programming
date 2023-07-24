#include "main.h"

/**
 * puts - prints a string skipping one index
 * @str: string to be printed
 * Return: return 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
