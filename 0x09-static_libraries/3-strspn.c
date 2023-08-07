#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int z = 0, i, y;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[i] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
		return (z);

}
