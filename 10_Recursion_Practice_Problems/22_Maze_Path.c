/**
 * Computes the total number of unique paths from the top-left corner
 * to the bottom-right corner of a grid with given rows and columns.
 * Only right and downward moves are allowed.
 *
 * @param total_rows    The number of rows in the grid.
 * @param total_columns The number of columns in the grid.
 * @return              The number of unique paths.
 */

#include <stdio.h>

int count_paths(int total_rows, int total_columns)
{
    int right_paths = 0, down_paths = 0;

    if (total_rows == 1 && total_columns == 1)
    {
        return 1;
    }

    if (total_rows == 1)
    {
        right_paths = count_paths(total_rows, total_columns - 1);
    }
    else if (total_columns == 1)
    {
        down_paths = count_paths(total_rows - 1, total_columns);
    }
    else
    {
        right_paths = count_paths(total_rows, total_columns - 1);
        down_paths = count_paths(total_rows - 1, total_columns);
    }

    return right_paths + down_paths;
}

int main()
{
    int rows, columns;

    printf(" Enter the number of rows : ");
    scanf(" %d", &rows);

    printf(" Enter the number of columns : ");
    scanf(" %d", &columns);

    int total_paths = count_paths(rows, columns);
    printf(" Number of unique paths to reach your friend : %d\n", total_paths);

    return 0;
}