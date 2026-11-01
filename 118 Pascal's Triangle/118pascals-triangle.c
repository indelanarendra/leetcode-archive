/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned in *returnColumnSizes.
 */

int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
    int **result = malloc(numRows * sizeof(int *));

    *returnSize = numRows;

    *returnColumnSizes = malloc(numRows * sizeof(int));

    for (int i = 0; i < numRows; i++)
    {
        // Each row has i + 1 elements
        result[i] = malloc((i + 1) * sizeof(int));

        (*returnColumnSizes)[i] = i + 1;

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                result[i][j] = 1;
            }
            else
            {
                result[i][j] =
                    result[i - 1][j - 1] +
                    result[i - 1][j];
            }
        }
    }

    return result;
}