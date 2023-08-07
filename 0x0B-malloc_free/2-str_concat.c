#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
char *cat;
int i, j, len1, len2;
if (s1 == NULL) /* treat NULL as empty string */
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = 0;
while (s1[len1]) /* get the length of s1 */
len1++;
len2 = 0;
while (s2[len2]) /* get the length of s2 */
len2++;
cat = malloc((len1 + len2 + 1) * sizeof(char));
if (cat == NULL) /* check if allocation succeeded */
return (NULL);
for (i = 0; i < len1; i++) /* copy s1 to cat */
cat[i] = s1[i];
for (j = 0; j < len2; j++) /* copy s2 to cat */
cat[i + j] = s2[j];
cat[i + j] = '\0'; /* add the null terminator */
return (cat); /* return the pointer to the concatenation */
}
