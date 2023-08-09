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
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

