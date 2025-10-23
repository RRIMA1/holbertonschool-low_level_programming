#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new string
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, j;

	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i = i + 1;
	}

	new_str = malloc(i * sizeof(*new_str) + 1);
	if (new_str == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		new_str[j] = str[j];
	new_str[j] = '\0';

	return (new_str);
}
