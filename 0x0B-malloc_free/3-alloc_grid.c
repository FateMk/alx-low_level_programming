#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 * Return: a double pointer to the 2D array
 *         else a NULL is returned
 */
int **alloc_grid(int width, int height)
{
    int **arr, i, j;
    /* creating a two dimesional array of integers*/
    if (height  <= 0 || width <= 0)
        return (NULL);
    arr = (int **)malloc(sizeof(int *) * height);
    if (arr  == NULL)
        return (NULL);
    for (i = 0; i < height; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * width);
        if (arr[i] == NULL)
        {
            for (j = 0; j < i; j++)
            {
                free(arr[i]);
                free(arr);
            }
            return (NULL);
        }
        for (j = 0; j < width; j++)
            arr[i][j] = 0;
    }
    return (arr);
}
