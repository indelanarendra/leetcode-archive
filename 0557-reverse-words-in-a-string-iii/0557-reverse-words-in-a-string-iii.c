void rev(char*s,int start,int end);
char* reverseWords(char* s) 
{
    int i=0;
    int start=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            int end=i-1;
            rev(s,start,end);
            start=i+1;
        }
        i++;
    }
    rev(s,start,i-1);
    return s;    
}
void rev(char*s,int start,int end)
{
    while(start<end)
    {
        char temp = s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
}