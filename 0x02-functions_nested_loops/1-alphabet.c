#include "main.h"

/**
 * main - print lowercase alphabet
 * Return: return 0
 */
void print_alphabet(void)
{
	int loweralpha;

	for (loweralpha = 'a'; loweralpha <= 'z'; loweralpha++)
	{
		_putchar(loweralpha);
	}

	_putchar('\n');
}
