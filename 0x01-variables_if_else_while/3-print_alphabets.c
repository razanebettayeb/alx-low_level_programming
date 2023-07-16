#include <stdio.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		putchar(C);
		c++;
		C++;
	}
	putchar('\n');
	return (0);
}
