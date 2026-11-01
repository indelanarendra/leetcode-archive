bool isHappy(int n) 
{
    while(1)
    {
        if(n==1)
        return n;
        if(n==4)
        return 0;
        int sum=0;
        while(n!=0)
        {
            int digit=n%10;
            sum=sum+digit*digit;
            n=n/10;
        }
        n=sum;
    }

    
}