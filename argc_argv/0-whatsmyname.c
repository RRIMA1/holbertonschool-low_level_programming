#include<stdio.h>

/**
 * main - Programme qui affiche son nom
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments
 *
 * Return: 0 en cas de succès
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
