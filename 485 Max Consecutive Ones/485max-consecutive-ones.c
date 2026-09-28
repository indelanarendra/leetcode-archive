int findMaxConsecutiveOnes(int* nums, int numsSize) 
{
    int max=0;
    for(int i=0;i<numsSize;i++)
    {
        int count=0;
        if(nums[i]==1)
        {
            while(i<numsSize && nums[i]==1)
            {
                count++;
                i++;
            }
        }
        if(max<count)
        {
            max=count;
        }

    }
    return max;
    
}