#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int divide(int dividend, int divisor)
{
    long long a = dividend;
    long long b = divisor;
    long long quotient = 0;
    int negative = 0;

    if (a < 0)
    {
        a = -a;
        negative = !negative;
    }

    if (b < 0)
    {
        b = -b;
        negative = !negative;
    }

    for (int i = 31; i >= 0; i--)
    {
        if ((b << i) <= a)
        {
            a = a - (b << i);
            quotient = quotient + (1LL << i);
        }
    }

    if (negative)
        quotient = -quotient;

    if (quotient > 2147483647)
        return 2147483647;

    if (quotient < -2147483648LL)
        return -2147483648LL;

    return (int)quotient;
}

int main()
{
    int dividend, divisor;

    scanf("%d %d", &dividend, &divisor);

    printf("%d\n", divide(dividend, divisor));

    return 0;
}
