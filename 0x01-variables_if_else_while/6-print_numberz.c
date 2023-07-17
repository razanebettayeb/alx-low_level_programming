#include <stdio.h>
/**
 * main - main function
i * Return: Always 0
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num % 10 + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
