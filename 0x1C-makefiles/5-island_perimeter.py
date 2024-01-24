#!/usr/bin/python3

def island_perimeter(grid):
    """ It returns the perimeter of the island described in grid. """
    p = 0
    g, gz = len(grid) , len(grid[0])
    for x in range(g):
        for y in range(gz):
            if grid[x][y] == 1:
                p += 4
                if x > 0 and grid[x-1][y] == 1:
                    p -= 2
                if y > 0 and grid[x][y - 1] == 1:
                    p -= 2
    return(p)
