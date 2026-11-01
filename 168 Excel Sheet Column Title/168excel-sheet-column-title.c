#define columnNumber  c
char* convertToTitle(int columnNumber) 
{
    char *res = malloc(20);
    int i=0;
    while(c>0)
    {
        c--;
        res[i++]='A'+(c%26);
        c=c/26;
    }
    res[i]='\0';
    int right = 0;
    int left = strlen(res)-1;
    while(right<left)
    {
        char temp=res[left];
        res[left]=res[right];
        res[right]= temp;
        right++;
        left--;
    }
    return res;
}