/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) 
{
    int n = numsSize;
    int *arr = malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        nums[i]=nums[i]*nums[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] > nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    *returnSize=n;
    return nums;

}