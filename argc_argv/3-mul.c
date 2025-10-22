#include<stdio.h>
#include <stdlib.h>
/**
 * main - Programme qui affiche le multiple des arguments
 * @argc: Nombre des arguments passés au programme
 * @argv: Tableau contenant les arguments
 *
 * Return: 0 en cas de succès
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}
