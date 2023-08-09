#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed
 * @argv: Array of pointers to strings representing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, num;
	char *arg;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; arg[j] != '\0'; j++)
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		num = atoi(arg);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
