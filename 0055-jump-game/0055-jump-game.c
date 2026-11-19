bool canJump(int* nums, int numsSize) 
{
    int jump_counter = 0, sum=0,i=0;
    while (i < numsSize && jump_counter < numsSize -1)
    {
        if (i > jump_counter)
            break;
        if (i + nums[i] > jump_counter)
            jump_counter = i + nums[i];
        printf("%d ",jump_counter);
        i++;
    }
    if (jump_counter >= numsSize - 1)
        return (true);
    return (false);
}