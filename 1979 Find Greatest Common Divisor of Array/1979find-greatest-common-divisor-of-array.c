int findGCD(int* nums, int numsSize) 
{
    int size = numsSize;
    int largest=nums[0];
    int smallest=nums[0];
    for(int i=1;i<size;i++)
    {
        if(largest<nums[i])
        largest=nums[i];
        if(smallest>nums[i])
        smallest=nums[i];
    }
    int i;
    for(i=smallest;i>0;i--)
    {
        if(largest%i==0&&smallest%i==0)
        break;
    }
    return i;
}