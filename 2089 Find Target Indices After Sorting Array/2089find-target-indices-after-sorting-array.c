/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int compare(const void *a,const void *b );
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) 
{
    int *arr= malloc(sizeof(int)*numsSize);
    qsort(nums,numsSize,sizeof(int),compare);
    int k=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            arr[k]=i;
            k++;
        }
    }
    *returnSize=k;
    return arr;
    
}
int compare(const void *a,const void *b )
{
    return (*(const int *)a > *(const int *)b)
     - (*(const int *)a < *(const int *)b);
}