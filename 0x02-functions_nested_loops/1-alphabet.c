#include "main.h"

/**
 * main - print lowercase alphabet
 * Return: return 0
 */
int main(void)
{
	void print_alphabet(void)
	{
		int loweralpha;

		for (loweralpha = a; a <= z; a++)
			_putchar(loweralpha);

		_putchar('\n');
		return (0);
	}
}
