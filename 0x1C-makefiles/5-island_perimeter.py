#!/usr/bin/python3
"""module for grid island perimeter function"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    Args: grid(2 dim array)
    Return: perimeter of tge island
    """
    perimeter = 0
    breadth = len(grid[0])
    length = len(grid)
# check if there is 1 on the next line
    for i in range(length):
        land_nxt = 0
        for j in range(breadth):
            # if we find 1 do
            if grid[i][j] == 1:
                # check top if its 0
                if grid[i - 1][j] == 0 or i == 0:
                    perimeter = perimeter + 1
                    # check below
                if i < length - 1:
                    if grid[i + 1][j] == 0:
                        perimeter = perimeter + 1
                    else:
                        land_nxt = 1
                else:
                    perimeter = perimeter + 1
                # check left
                if grid[i][j-1] == 0 or j == 0:
                    perimeter = perimeter + 1
                # check right
                if j < breadth-1:
                    if grid[i][j + 1] == 0:
                        perimeter = perimeter + 1
                # add 1 to perimeter if its the last element in the row
                else:
                    perimeter = perimeter + 1
        if land_nxt == 0 and perimeter > 0:
            ++i
    return perimeter
