#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Vérifie si une chaîne contient uniquement des chiffres
 * @s: la chaîne à vérifier
 *
 * Return: 1 si la chaîne est un nombre positif, 0 sinon
 */
int is_number(char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (0);

	while (s[i])
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Additionne les nombres positifs passés en arguments
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 *
 * Return: 0 en cas de succès, 1 en cas d'erreur
 */
int main(int argc, char *argv[])
{
	int somme = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]))
		{
			somme += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", somme);
	return (0);
}
