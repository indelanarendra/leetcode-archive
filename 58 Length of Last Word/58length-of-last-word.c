int lengthOfLastWord(char* s) 
{
    int length =strlen(s)-1;
    while(s[length]==' ')
    {
        length--;
    }
    int count=0;
    while(length>-1&&s[length]!=' ')
    {
         count++;
        length--;
    }
    return count;
}