/*
 ============================================================================
 Name        : coc_sudoku_grid_validator.c
 Author      : Sachin
 Description : Sudoku Grid Validator in C
 ============================================================================
*/

#include <stdio.h>

// Function prototypes
int check_rows(int grid[9][9]);
int check_columns(int grid[9][9]);
int check_subgrids(int grid[9][9]);

// ------------------------------------------------------------
// MAIN FUNCTION
// ------------------------------------------------------------
int main(void)
{
    // Hard-coded Sudoku grid (a valid example)
    int grid[9][9] = {
        {5,3,4,6,7,8,9,1,2},
        {6,7,2,1,9,5,3,4,8},
        {1,9,8,3,4,2,5,6,7},
        {8,5,9,7,6,1,4,2,3},
        {4,2,6,8,5,3,7,9,1},
        {7,1,3,9,2,4,8,5,6},
        {9,6,1,5,3,7,2,8,4},
        {2,8,7,4,1,9,6,3,5},
        {3,4,5,2,8,6,1,7,9}
    };

    // Check the three Sudoku rules
    int rows_valid = check_rows(grid);
    int columns_valid = check_columns(grid);
    int subgrids_valid = check_subgrids(grid);

    // Final verdict
    if (rows_valid && columns_valid && subgrids_valid)
    {
        printf("VALID SOLUTION\n");
    }
    else
    {
        printf("INVALID SOLUTION\n");
    }

    return 0;
}

// ------------------------------------------------------------
// FUNCTION: check_rows
// Purpose : Ensures each row contains 1–9 exactly once
// ------------------------------------------------------------
int check_rows(int grid[9][9])
{
    for (int r = 0; r < 9; r++)
    {
        for (int num = 1; num <= 9; num++)
        {
            int count = 0;

            for (int c = 0; c < 9; c++)
            {
                if (grid[r][c] == num)
                {
                    count++;
                }
            }

            // If number appears more or less than once → invalid
            if (count != 1)
            {
                // Uncomment to find Error: 
                //printf("Row %d invalid at number %d\n", r+1, num);
                return 0;
            }
        }
    }

    return 1; // All rows valid
}

// ------------------------------------------------------------
// FUNCTION: check_columns
// Purpose : Ensures each column contains 1–9 exactly once
// ------------------------------------------------------------
int check_columns(int grid[9][9])
{
    for (int c = 0; c < 9; c++)
    {
        for (int num = 1; num <= 9; num++)
        {
            int count = 0;

            for (int r = 0; r < 9; r++)
            {
                if (grid[r][c] == num)
                {
                    count++;
                }
            }

            if (count != 1)
            {
                // Uncomment to find Error: 
                //printf("Column %d invalid at number %d\n", c+1, num);
                return 0;
            }
        }
    }

    return 1;
}

// ------------------------------------------------------------
// FUNCTION: check_subgrids
// Purpose : Ensures each 3x3 box contains 1–9 exactly once
// ------------------------------------------------------------
int check_subgrids(int grid[9][9])
{
    // There are 3 rows and 3 columns of boxes → total 9 boxes
    for (int start_row = 0; start_row < 9
    ; start_row += 3)
    {
        for (int start_col = 0; start_col < 9
        ; start_col += 3)
        {
            // For each number from 1 to 9, check if it appears exactly once
            for (int num = 1; num <= 9; num++)
            {
                int count = 0;

                // Now we walk through each 3x3 subgrid using nested loops
                for (int r = start_row; r < start_row + 3; r++)
                {
                    for (int c = start_col; c < start_col + 3; c++)
                    {
                        if (grid[r][c] == num)
                        {
                            count++;
                        }
                    }
                }

                if (count != 1)
                {
                    // Uncomment to find Error:
                    // printf("Invalid box starting at (%d, %d) for number %d\n", start_row+1, start_col+1, num);
                    return 0;
                }
            }
        }
    }

    return 1;
}
