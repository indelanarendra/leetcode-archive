int pivotIndex(int* nums, int numsSize) 
{
    for(int i=0;i<numsSize;i++)
    {
        int left_sum=0;
        int right_sum=0;
        for(int j=i+1;j<numsSize;j++)
        {
            right_sum+=nums[j];
        }

        for(int k=i-1;k>=0;k--)
        {
            left_sum+=nums[k];
        }
        if(left_sum==right_sum)
        return i;
    }
    return -1;
    
}