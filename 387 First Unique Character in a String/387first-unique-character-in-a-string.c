int firstUniqChar(char* s) 
{
    int arr[256]={0};
    int i=0;
    while(s[i]!='\0')
    {
        arr[s[i]]++;
        i++;
    }
    i=0;
    while(s[i]!='\0')
    {
        if(arr[s[i]]==1)
        {
            return i;
        }
        i++;
    }
    return -1;
}