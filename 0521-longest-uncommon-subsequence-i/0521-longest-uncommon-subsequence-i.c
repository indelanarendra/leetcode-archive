int findLUSlength(char* a, char* b) 
{
    int i=0;
        while(a[i]!='\0'&&b[i]!='\0')
        {
            if(a[i]!=b[i])
            {
                if(strlen(a)>strlen(b))
                return strlen(a);
                return strlen(b);
            }
            i++;
        }
        if(a[i]!='\0'|b[i]!='\0')
        {
           if(strlen(a)>strlen(b))
            return strlen(a);
            return strlen(b); 
        }
        return -1;
}