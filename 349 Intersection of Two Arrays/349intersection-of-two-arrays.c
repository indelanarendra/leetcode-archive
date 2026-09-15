int* intersection(int* nums1, int nums1Size,
                  int* nums2, int nums2Size,
                  int* returnSize)
{
    int hash[1001] = {0};
    int *result = malloc(nums1Size * sizeof(int));
    int k = 0;

    // Store nums1
    for(int i = 0; i < nums1Size; i++)
    {
        hash[nums1[i]] = 1;
    }

    // Check nums2
    for(int i = 0; i < nums2Size; i++)
    {
        if(hash[nums2[i]] == 1)
        {
            result[k++] = nums2[i];
            hash[nums2[i]] = 0;
        }
    }

    *returnSize = k;
    return result;
}