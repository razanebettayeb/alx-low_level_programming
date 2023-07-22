#include "main.h"
/**
 * _isupper - fucntion to find if the input is upper case or not
 * @c: the input of the function
 * Return: 1 if upper case and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
