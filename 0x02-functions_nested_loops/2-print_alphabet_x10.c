#include "main.h"

/**
 * print_alphabet_x10 - print
 * lowercase 10 times
 * Return: return 0
 */
void print_alphabet_x10(void)
{
	int loweralpha;

	int count = 0;

	do {
		for(loweralpha = 'a'; loweralpha <= 'z'; loweralpha++)
		{
			_putchar(loweralpha)'
		}

		_putchar('\n');
		count++;
	} while(count < 9);
}
