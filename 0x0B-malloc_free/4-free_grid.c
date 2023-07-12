#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - A function that prints a string
 *           follow by a new line
 *
 * @s: first (string) parameter of the function
 *
 * Return: Always 0(success)
 */

void free_grid(int **grid, int height) {

    for (int i = 0; i < height; i++) {
        free(grid[i]);
    }

    free(grid);
}
