#include "main.h"
/**
 *_isalpha - Check Main
 *@c: an input character
 *Description: uses _puthchar to print
 *Return: 1 if a letter 0 otherwise
 */
int _isalpha(int c)
{
	char low;
	char up;
	int isletter = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (low == c || up == c)
				isletter = 1;
		}
	}
	return (isletter);
}
