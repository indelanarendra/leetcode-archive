bool isIsomorphic(char* s, char* t) 
{

   if(strlen(s)!=strlen(t))
   return 0;

   int hash[256]={0};

   int hash1[256]={0};

   for(int i=0;s[i]!='\0';i++)
   {
        if(hash[s[i]]!=0||hash1[t[i]]!=0)
        {
            if(hash[s[i]]!=t[i]||hash1[t[i]]!=s[i])
            return 0;
        }
        else
        {
            hash[s[i]]=t[i];
            hash1[t[i]]=s[i];
        }
   }
   return 1;
    
}