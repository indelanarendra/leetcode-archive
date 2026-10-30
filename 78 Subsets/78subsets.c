#include <stdio.h>
#include <stdlib.h>

int** subsets(int* nums, int numsSize,
              int* returnSize, int** returnColumnSizes)
{
    int total = 1 << numsSize;

    int **res = malloc(total * sizeof(int*));

    *returnColumnSizes = malloc(total * sizeof(int));
    *returnSize = total;

    for (int i = 0; i < total; i++)
    {
        int count = 0;

        for (int j = 0; j < numsSize; j++)
        {
            if (i & (1 << j))
                count++;
        }

        res[i] = malloc(count * sizeof(int));
        (*returnColumnSizes)[i] = count;

        int k = 0;

        for (int j = 0; j < numsSize; j++)
        {
            if (i & (1 << j))
                res[i][k++] = nums[j];
        }
    }

    return res;
}