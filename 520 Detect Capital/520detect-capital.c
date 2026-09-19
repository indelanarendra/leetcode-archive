bool detectCapitalUse(char* word)
{
    int i = 0;

    // Case 1: All uppercase
    while (word[i] != '\0' && isupper(word[i]))
    {
        i++;
    }

    if (word[i] == '\0')
        return true;

    // Case 2: All lowercase
    i = 0;

    while (word[i] != '\0' && islower(word[i]))
    {
        i++;
    }

    if (word[i] == '\0')
        return true;

    // Case 3: First uppercase, remaining lowercase
    if (isupper(word[0]))
    {
        i = 1;

        while (word[i] != '\0' && islower(word[i]))
        {
            i++;
        }

        if (word[i] == '\0')
            return true;
    }

    return false;
}