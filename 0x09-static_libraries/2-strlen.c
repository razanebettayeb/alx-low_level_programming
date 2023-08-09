#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * Description: calculate the length of string
 * Return: the length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] !=  '\0')
		i++;
	return (i);
}
