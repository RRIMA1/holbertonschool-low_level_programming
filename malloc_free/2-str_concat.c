#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the nwe string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	new_str = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (new_str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		new_str[k] = s1[k];
	for (k = i; k < i + j; k++)
		new_str[k] = s1[k - i];

	return (new_str);
}
