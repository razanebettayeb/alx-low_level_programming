#include "main.h"

/**
 * _strstr - this function locates a substring in a string
 *
 * @haystack: the target string
 * @needle: the substring
 *
 * Return: a pointer to the first byte of
 * the substring in the @haystack if found,
 * else will return Null.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
