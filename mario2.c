#include <stdio.h>

int main(void)
{
    int n = 5; // number of rows and columns

    // for each row
    for (int row = 0; row < n; row++)
    {
        // for each column
        for (int col = 0; col < n; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}