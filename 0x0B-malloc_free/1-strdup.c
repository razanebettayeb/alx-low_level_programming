#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 * Return: a pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
char *dup;
int i, len;
if (str == NULL) /* check if str is valid */
return (NULL);
len = 0;
while (str[len]) /* get the length of str */
len++;
dup = malloc((len + 1) * sizeof(char)); /* allocate memory for the duplicate */
if (dup == NULL) /* check if allocation succeeded */
return (NULL);
for (i = 0; i < len; i++) /* copy the string */
dup[i] = str[i];
dup[len] = '\0'; /* add the null terminator */
return (dup); /* return the pointer to the duplicate */
}
