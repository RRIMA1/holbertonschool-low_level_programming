#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);


	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);
	for (i = 0 ; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			while (i > 0)
			{
				free(array[i - i]);
				i--;
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);

}
