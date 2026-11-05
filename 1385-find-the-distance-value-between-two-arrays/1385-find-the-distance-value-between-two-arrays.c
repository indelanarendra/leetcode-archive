int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d) 
{
    int count=0;
    for(int i=0;i<arr1Size;i++)
    {
        int flag=1;
        for(int j=0;j<arr2Size;j++)
        {
            int dif = arr1[i]-arr2[j];
            if(dif<0)
            dif=-(dif);
            if(dif<=d)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        count++;
    }
    return count;
}