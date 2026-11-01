#include <limits.h>

unsigned int reverseBits(unsigned int n)
{
    unsigned int sum = 0;
    unsigned int mul = 1U << 31;

    for (int i = 0; i < 32; i++)
    {
        unsigned int res = (n >> i) & 1U;

        sum = sum + res * mul;

        mul = mul / 2;
    }

    return sum;
}