/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) 
{
    int *arr1=malloc(2*sizeof(int));
    *returnSize=2;
    *gridColSize=gridSize;
    int n=gridSize;
    int arr[n*n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[k++]= grid[i][j];
        }
    }
    for(int i=0;i<k;i++)
    {
        int flag=0;
        for(int j=0;j<k;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            arr1[0]=arr[i];
            arr[i]=0;
            break;
        }
    }
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    arr1[1]=((k*(k+1))/2)-sum;
    return arr1;
}