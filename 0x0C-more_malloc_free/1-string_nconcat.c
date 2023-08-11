#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1 = 0, len2 = 0, i, j;

/* check for NULL inputs */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* calculate the lengths of s1 and s2 */
while (s1[len1])
len1++;
while (s2[len2])
len2++;

/* adjust n if it is greater than or equal to len2 */
if (n >= len2)
n = len2;

/* allocate memory for the concatenated string */
concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);

/* copy s1 and n bytes of s2 to concat */
for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (j = 0; j < n; j++, i++)
concat[i] = s2[j];
concat[i] = '\0'; /* add null terminator */

return (concat);
}
