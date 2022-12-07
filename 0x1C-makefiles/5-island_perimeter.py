#!/usr/bin/python3
""" Defines class island_perimeter """


def island_perimeter(grid):
    """ variables """

    x = len(grid[0])
    y = len(grid)
    perimeter = 0

    for i in range(y):
        for j in range(x):

            if grid[i][j] == 1:
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                if j == x-1 or grid[i][j+1] == 0:
                    perimeter += 1
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if i == y-1 or grid[i+1][j] == 0:
                    perimeter += 1

    return perimeter
