bool isAnagram(char* s, char* t)
{
    if (strlen(s) != strlen(t))
        return false;

    int arr[256] = {0};

    int i = 0;

    while (s[i] != '\0')
    {
        arr[(unsigned char)s[i]]++;
        arr[(unsigned char)t[i]]--;
        i++;
    }

    for (i = 0; i < 256; i++)
    {
        if (arr[i] != 0)
            return false;
    }

    return true;
}