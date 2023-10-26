#!/usr/bin/python3
"""a function that returns the perimeter of the island described in grid."""
def island_perimeter(grid):
    """
    Args: list of int representing an island.
    return: The perimeter of the island (grid).
    """
    if not grid:
        return (0)
    ze = grid[0]
    x , y = len(grid) , len(ze)
    e , s = 0, 0 

