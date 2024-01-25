#!/usr/bin/python3

def island_perimeter(grid):
    """ It returns the perimeter of the island described in grid. """
    p = 0
    g, gz = len(grid) , len(grid[0])
    for x, u in enumerate(grid):
        for y, w in enumerate(u):
            if w == 1:
                if x == 0 or grid[x - 1][y] != 1:
                    p += 1
                if y == 0 or grid[x][y - 1] != 1:
                    p += 1
                if y == gz - 1 or grid[x][y + 1] != 1:
                    p += 1
                if x == g - 1 or grid[x + 1][y] != 1:
                    p += 1
    return (p)
