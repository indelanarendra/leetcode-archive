char* convertToBase7(int num) 
{
    int ans=0;
    int digit = 1;
    char*res=malloc(sizeof(char)*21);
    while(num!=0)
    {
        ans+=digit*(num%7);
        num/=7;
        digit*=10;
    }
    sprintf(res,"%d",ans);
    return res;
}