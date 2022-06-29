#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: pointer to 2D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;
	/*creating a two dimesional array of integers*/
	if (height <= 0 || width <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
    	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
	            arr[i][j] = 0;
   	 }
   	 return (arr);
}
