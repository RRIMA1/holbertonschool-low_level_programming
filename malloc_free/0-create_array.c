#include <stdio.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *ar;

	ar = malloc(size * sizeof(char));
	for (int i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}


int main(void)
{

}
