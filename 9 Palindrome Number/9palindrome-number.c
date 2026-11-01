bool isPalindrome(int x) {
    long int temp=x;
    long int rem,rev=0;
    if (x<0)
        return false;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    return rev==x;
}