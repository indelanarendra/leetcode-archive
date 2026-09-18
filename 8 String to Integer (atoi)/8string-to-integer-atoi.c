
int myAtoi(char* s)
{
    int i = 0;
    int sign = 1;
    int sum = 0;

    // Skip leading spaces
    while (s[i] == ' ')
    {
        i++;
    }

    // Sign
    if (s[i] == '+')
    {
        i++;
    }
    else if (s[i] == '-')
    {
        sign = -1;
        i++;
    }

    // Digits
    while (isdigit(s[i]))
    {
        int digit = s[i] - '0';

        // Check overflow before multiplication
        if (sum > (INT_MAX - digit) / 10)
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }

        sum = sum * 10 + digit;
        i++;
    }

    return sum * sign;
}