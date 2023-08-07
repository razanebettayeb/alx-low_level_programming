#include "main.h"

/**
 * _strpbrk - this function that searches a string for any of a set of bytes
 *
 * @s: the string target
 *
 * @accept: the chat set
 *
 * Return: a pointer to the subset first byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *ptr = -1;

	while (*s && ptr == -1)
	{
		for (i = 0; accept[i] && ptr == -1; i++)
		{
			if (*s == accept[i])
			{
				ptr = s;
			}
		}
		s++;
	}
	return (ptr);
}
