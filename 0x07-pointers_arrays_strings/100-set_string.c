#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer that points to another pointer
 * @to: first pointer
 *
 * Return: return 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
