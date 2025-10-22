#include<stdio.h>

/**
 * main - Programme qui affiche le numero d'arguments
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments
 *
 * Return: 0 en cas de succès
 */
int main(int argc, char *argv[])
{
    (void)argv;
	printf("%d\n", argc-1);
	return (0);
}
