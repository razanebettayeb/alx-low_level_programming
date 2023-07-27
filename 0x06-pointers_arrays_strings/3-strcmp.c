#include "main.h"
/**
 * _strcmp - Write a function that compares two strings
 * @s1: first string as input
 * @s2: second string as second input
 * Return: 0 if two strings are same
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
}
return (s1[i] - s2[i]);
}
