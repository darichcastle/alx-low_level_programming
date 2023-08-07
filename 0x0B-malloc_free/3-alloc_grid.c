#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int n, m;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		array[n] = (int *) malloc(sizeof(int) * width);
		if (array[n] == NULL)
		{
			free(array);
			for (m = 0; m <= n; m++)
				free(array[m]);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			array[n][m] = 0;
		}
	}
	return (array);
}
