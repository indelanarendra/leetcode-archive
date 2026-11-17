/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) 
{
    char**res=malloc(sizeof(char*)*n);
    if(res==NULL)
    {
        return NULL;
        *returnSize=0;
    }
    *returnSize=n;
    for(int i=1;i<=n;i++)
    {
        res[i-1]=malloc(sizeof(char)*9);
        if(i%3==0&&i%5==0)
        {
            res[i-1]=malloc(sizeof(char)*9);
            strcpy(res[i-1],"FizzBuzz");
        }
        else if(i%3==0)
        {
            res[i-1]=malloc(sizeof(char)*5);
            strcpy(res[i-1],"Fizz");
        }
        else if(i%5==0)
        {
            res[i-1]=malloc(sizeof(char)*5);
            strcpy(res[i-1],"Buzz");
        }
        else
        {
            res[i-1]=malloc(sizeof(char)*12);
            sprintf(res[i-1],"%d",i);
        }
    }
    return res;
}