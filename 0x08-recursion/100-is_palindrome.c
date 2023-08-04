#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: Pointer to the string
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}

/**
 * _is_palindrome_helper - Helper function to determine
 * if a string is a palindrome
 * @s: Pointer to the string to check
 * @start: The starting index to check
 * @end: The ending index to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int _is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (_is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 * @s: Pointer to the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);

return (_is_palindrome_helper(s, 0, len - 1));
}
