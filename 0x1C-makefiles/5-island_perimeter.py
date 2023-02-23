#!/usr/bin/python3
"""
IslandPerimiter module
"""


def island_perimeter(grid):
    """
        Returns the perimeter of given island
    """
    w = len(grid[0])
    h = len(grid)
    perimeter = 0

    for i, col in enumerate(grid):
        for j, row in enumerate(col):
            if row == 1:
                perimeter += 4
                if grid[i][j-1] == 1:
                    perimeter -= 1
                if grid[i][(j+1) % w] == 1:
                    perimeter -= 1
                if grid[(i+1) % h][j] == 1:
                    perimeter -= 1
                if grid[i-1][j] == 1:
                    perimeter -= 1
    return perimeter
