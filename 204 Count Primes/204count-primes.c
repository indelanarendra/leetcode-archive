

int countPrimes(int n)
{
    if(n <= 2)
        return 0;

    // Only store odd numbers
    int size = n / 2;

    char *prime = malloc(size * sizeof(char));

    if(prime == NULL)
        return 0;

    // Assume all odd numbers are prime
    for(int i = 0; i < size; i++)
    {
        prime[i] = 1;
    }

    // 1 is not prime
    prime[0] = 0;

    for(int i = 3; i * i < n; i += 2)
    {
        if(prime[i / 2])
        {
            for(int j = i * i; j < n; j += 2 * i)
            {
                prime[j / 2] = 0;
            }
        }
    }

    int count = 1;  // Count 2

    for(int i = 1; i < size; i++)
    {
        if(prime[i])
            count++;
    }

    free(prime);

    return count;
}