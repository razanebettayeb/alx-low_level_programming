#include "main.h"

/**
 * _strchr - this function locates a character in a string
 *
 * @s: the target string
 *
 * @c: the character to locates
 *
 * Return: a pointer to the first occurrence of the character c in s
 */

char *_strchr(char *s, char c)
{
	char *ptr = -1;

	while (*s != '\0' && ptr == -1)
	{
		if (*s == c)
		{
			ptr = s;
		}
		s++;
	}
	if (c == '\0')
		ptr = s;

	return (ptr);
}
