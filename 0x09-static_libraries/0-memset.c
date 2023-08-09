#include "main.h"

/**
 * _memset - this function fill the first n bytes
 * of the memory area pointed to by s with the constant byte b
 *
 * @s: the memory are to be filled
 *
 * @n: number of bytes to be filled
 *
 * @b: the character to be filled
 *
 * Return: a pointer to the memory area s filled with b, n times.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
