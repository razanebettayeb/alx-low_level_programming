#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed
 * @argv: Array of pointers to strings representing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

