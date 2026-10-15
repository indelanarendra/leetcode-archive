#include <stdlib.h>

int** transpose(int** matrix, int matrixSize, int* matrixColSize,
                int* returnSize, int** returnColumnSizes)
{
    int row = matrixSize;
    int col = matrixColSize[0];

    *returnSize = col;

    int **arr = malloc(sizeof(int *) * col);
    *returnColumnSizes = malloc(sizeof(int) * col);

    for (int i = 0; i < col; i++)
    {
        arr[i] = malloc(sizeof(int) * row);
        (*returnColumnSizes)[i] = row;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[j][i] = matrix[i][j];
        }
    }

    return arr;
}