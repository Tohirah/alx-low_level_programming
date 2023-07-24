#include "main.h"

/**
 * _strlen - checks for he length of string
 * @s: parameter to be checked for length
 *
 * Return: return length of the parameter passed
 */

int _strlen(char *s)
{
	int index, length;

	length = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		length++;
	}
	return (length);
}
