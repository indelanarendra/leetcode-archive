bool isPowerOfTwo(int n) 
{
    long long int sum=1;
    while(sum<=n)
    {
        if(sum==n)
        return 1;
        sum=sum*2;
    }
    return 0;
    
}