#include "main.h"
/**
 * _strcat - function used to concate two strings
 * @src: the first string
 * @dest: is the destination array pointer
 * Return: the return is an array pointer of the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len])
	{
		dest_len++;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}
