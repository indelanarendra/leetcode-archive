int minimumDeletions(int* nums, int numsSize)
{
    int largest = nums[0];
    int smallest = nums[0];

    int large = 0;
    int small = 0;

    for(int i = 1; i < numsSize; i++)
    {
        if(nums[i] > largest)
        {
            largest = nums[i];
            large = i;
        }

        if(nums[i] < smallest)
        {
            smallest = nums[i];
            small = i;
        }
    }

    int left = (large > small ? large : small) + 1;

    int right = numsSize - (large < small ? large : small);

    int both = (large < small)
             ? (large + 1) + (numsSize - small)
             : (small + 1) + (numsSize - large);

    int min = left;

    if(right < min)
        min = right;

    if(both < min)
        min = both;

    return min;
}