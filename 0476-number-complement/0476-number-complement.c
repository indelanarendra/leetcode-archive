int findComplement(int num) 
{
    long int temp=1;
    while(temp<=num)
    {
        temp=temp<<1;
    }
    temp=temp-1;
    num=temp&~(num);
    return num;       
}