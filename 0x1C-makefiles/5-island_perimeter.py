#!/usr/bin/python3
"""Island Perimeter."""


def island_perimeter(grid):

    perimeter = 0
    # iterate throught the entire body of water (0)
    for row in range(len(grid)):
        for column in range(len(grid[row])):
            # checking if iterator recognizes land in the body of water (1)
            if grid[row][column] == 1:
                # if there's land then check if there's water next to it
                # if there is water add 1 to the perimeter
                if column == len(grid[row]) - 1 or grid[row][column + 1] == 0:
                    perimeter = perimeter + 1
                # if there's land then check if there's water above or below it
                # if there is water add 1 to the perimeter
                if row == len(grid) - 1 or grid[row + 1][column] == 0:
                    perimeter = perimeter + 3
    return perimeter
