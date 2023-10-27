#!/usr/bin/python3
"""a function that returns the perimeter of the island described in grid."""
def island_perimeter(grid):
    """
    Args: list of int representing an island.
    return: The perimeter of the island (grid).
    """
    if not grid:
        return (0) 
    x, y = len(grid), len(grid[0])
    p = 0
    for i in range(x):
        for j in range(y):
            if grid[i][j] == 1:
                p += 4
                if i > 0 and grid[i - 1][j] == 1:
                    p -= 1
                if i < x - 1 and grid[i + 1][j] == 1:
                    p -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    p -= 1
                if j < y - 1 and grid[i][j + 1] == 1:
                    p -= 1
     return (p)
