#include "main.h"

/*
 *_islower - checks if a character is in lowercase
 *@c: it takes int c as parameter
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
