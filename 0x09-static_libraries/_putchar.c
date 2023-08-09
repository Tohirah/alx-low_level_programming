#include <unistd.h>

/**
 * _putchar - prijts the char passedc into it
 * @c: character tp be printed
 *
 * Return: return 0 or 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
