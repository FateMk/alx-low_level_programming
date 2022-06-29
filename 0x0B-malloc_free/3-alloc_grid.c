#include "main"
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
    int **arr;
    int i, j;
    
    if(height  < 1 || width < 1)
        return (NULL);
    arr = (int **)malloc(sizeof(int) * height);
    if (arr  == NULL)
        return (NULL);
    for (i = 0; i < height; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * width);
        if(arr[i] == NULL)
        {
            for (i--; i>=0; i--)
                free(arr[i]);
            free(arr);
            return (NULL);
        }
    }
    for (i = 0; i < height; i++)
        for (j = 0; j < width; j++)
            arr[i][j] = 0;
    return (arr);
}
