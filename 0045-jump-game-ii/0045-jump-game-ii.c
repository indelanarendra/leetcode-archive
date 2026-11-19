int jump(int* nums, int numsSize) 
{
    int max_reach = 0;
    int current_end = 0;
    int count = 0;

    for (int i = 0; i < numsSize - 1; i++) 
    {
        if (i + nums[i] > max_reach)
        {
            max_reach = i + nums[i];
        }

        if (i == current_end)
        {
            count++;
            current_end = max_reach;
        }
    }

    return count;
}