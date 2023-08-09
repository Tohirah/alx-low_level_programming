#include "main.h"

/**
 * _isupper - chnage char to upper case
 * @c: char to be converted to uppercase
 *
 * Return: return 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
