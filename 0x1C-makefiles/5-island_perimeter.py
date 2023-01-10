#!/usr/bin/python3
''' This module is `called island_perimeter`. It contains a function of the
    same name that computes the perimeter of a island
'''


def island_perimeter(grid):
    '''Computes the perimeter of an island from a grid.
        Ags:
            grid:
                - 0 represents a water zone
                - 1 represents a land zone
                - One cell is a square with side length 1
                - Grid cells are connected horizontally/vertically
                    (not diagonally).
                - Grid is rectangular, width and height don’t exceed 100
                - Grid is completely surrounded by water, and there is one
                    island (or nothing).
       Return:
            an integer representing the perimeter of an island.
    '''
    nr, nc, p = len(grid), len(grid[0]), 0

    for i in range(nr):
        for j in range(nc):
            if grid[i][j] == 1:
                p += 4
                if (((i - 1) >= 0) and (grid[i - 1][j] == 1)):
                    p -= 1
                if (((i + 1) < nr) and (grid[i + 1][j] == 1)):
                    p -= 1
                if (((j - 1) >= 0) and (grid[i][j - 1] == 1)):
                    p -= 1
                if (((j + 1) < nc) and (grid[i][j + 1] == 1)):
                    p -= 1
    return (p)
