#include "main.h"

/**
 * _islower - Check Main
 * @c: An input character
 * Description: function uses _putchar function to print
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char alph;
	int lower = 0;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == c)
			lower = 1;
	}
	return (lower);
}
