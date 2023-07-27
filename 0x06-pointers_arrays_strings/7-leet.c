#include "main.h"
/**
 * leet - fuction for encoding words into leet code
 * @str: the input string to the function
 * Return: the encoded strin
 */
char *leet(char *str)
{
	char arr[] = "aAeEoOtTlL";
	char code[] = "4433007711";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (str[i] == arr[j])
			{
				str[i] = code[j];
				break;
			}
		}
	}
	return (str);
}
