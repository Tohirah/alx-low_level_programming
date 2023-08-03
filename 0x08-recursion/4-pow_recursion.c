#include "main.h"

/**
 * _pow_recursion - calculate the power
 * @x: base value
 * @y: power value
 *
 * Return: return power of xraise to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		--y;
	return (_pow_recursion(x, y) * x);
	}
}
