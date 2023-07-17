#include <stdio.h>
/**
  *main - prints numbers of base 16 in lowercase
  *Return: 0
*/
int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		printf("%x", num);
	}
	putchar('\n');

	return (0);
}
