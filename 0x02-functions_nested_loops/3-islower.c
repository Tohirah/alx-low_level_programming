#include "main.h"

/*
 * _islower - controls if a character is in lowercase
 *@c: characater to be checked
 * Return: return 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
