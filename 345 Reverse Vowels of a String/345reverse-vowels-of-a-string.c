char* reverseVowels(char* s) 
{
    int start = 0;
    int end = strlen(s) - 1;

    while (start < end)
    {
        // Find vowel from left
        while (start < end)
        {
            if (s[start] == 'a' || s[start] == 'e' ||
                s[start] == 'i' || s[start] == 'o' ||
                s[start] == 'u' ||
                s[start] == 'A' || s[start] == 'E' ||
                s[start] == 'I' || s[start] == 'O' ||
                s[start] == 'U')
                break;

            start++;
        }

        // Find vowel from right
        while (start < end)
        {
            if (s[end] == 'a' || s[end] == 'e' ||
                s[end] == 'i' || s[end] == 'o' ||
                s[end] == 'u' ||
                s[end] == 'A' || s[end] == 'E' ||
                s[end] == 'I' || s[end] == 'O' ||
                s[end] == 'U')
                break;

            end--;
        }

        // Swap vowels
        if (start < end)
        {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;

            start++;
            end--;
        }
    }

    return s;
}