#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Gives the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers
    Returns:
        The perimeter in grid.
    """
    grid_width = len(grid[0])
    grid_height = len(grid)
    edges_count = 0
    size_count = 0

    i = 0
    while i < grid_height:
        j = 0
        while j < grid_width:
            if grid[i][j] == 1:
                size_count += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges_count += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges_count += 1
            j += 1
        i += 1
    return size_count * 4 - edges_count * 2
