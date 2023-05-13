#!/usr/bin/python3
'''
5-island_perimeter module
Computes the perimeter of the island described in grid
'''


def island_perimeter(grid):
    '''Computes the perimeter of the island described in grid'''
    n, sides = 0, 4
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                n += sides
                if (i > 0 and grid[i - 1][j] == 1):
                    n -= 1
                if (i < (len(grid) - 1) and grid[i + 1][j] == 1):
                    n -= 1
                if (j > 0 and grid[i][j - 1] == 1):
                    n -= 1
                if (j < (len(grid[i]) - 1) and grid[i][j + 1] == 1):
                    n -= 1
    return (n)
