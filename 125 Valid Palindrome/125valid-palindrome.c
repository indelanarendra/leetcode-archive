bool isPalindrome(char* s)
{
    int i=0;
    int j=0;
    while(s[i]!='\0')
    {
        if(isalnum(s[i]))
        {
            s[j]=tolower(s[i]);
            j++;
        }
        i++;
    }
    s[j]='\0';
    int start=0;
    int end=j-1;
    while(start<end)
    {
        if(s[start]!=s[end])
        return 0;
        start++;
        end--;
    }
    return 1;
    
}