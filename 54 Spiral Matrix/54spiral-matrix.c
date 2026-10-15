/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) 
{
    int rows=matrixSize;
    int cols=matrixColSize[0];
    *returnSize = rows*cols;
    int *arr=malloc(sizeof(int)*(*returnSize));
    int ind=0;
    int top=0;
    int left=0;
    int bottom=rows-1;
    int right=cols-1;
    while(top<=bottom && left<=right)
    {
        for(int i=top;i<=right;i++)
        {
            arr[ind++]=matrix[top][i];
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            arr[ind++]=matrix[i][right];
        }
        right--;
        if(top<=bottom)
        {
        for(int i=right;i>=left;i--)
        {
            arr[ind++]=matrix[bottom][i];
        }
        }
        bottom--;
        if(left<=right)
        {
        for(int i=bottom;i>=top;i--)
        {
            arr[ind++]=matrix[i][left];
        }
        left++;
        }
        
    }
    return arr;
    
}