#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed
 * @argv: Array of pointers to strings representing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the input arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Perform multiplication */
	result = num1 * num2;

	/* Print the result followed by a newline */
	printf("%d\n", result);

	return (0);
}

