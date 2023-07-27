#include "main.h"
/**
 * _strncat - function used to concate two strings
 * @src: the first string
 * @dest: is the destination array pointer
 * @n: identifies the number of character that will be concatenated
 * Return: the return is an array pointer of the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len])
	{
		dest_len++;
	}
	for (i = 0; *(src + i) != '\0' && i < n; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}
