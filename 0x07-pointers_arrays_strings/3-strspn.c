#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: this is the string tp be checked
 * @accept: characters to be matched
 *
 * Return: return number of bytes of charaters that match
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				counter += 1;
				break;
			}
		}
	}

	return (counter);
}
