#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long binaryGCD(long long a, long long b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    int shift = 0;
    while (((a | b) & 1) == 0)
    {
        a >>= 1;
        b >>= 1;
        shift++;
    }
    while ((a & 1) == 0)
        a >>= 1;
    while (b != 0)
    {
        while ((b & 1) == 0)
            b >>= 1;
        if (a > b)
        {
            long long temp = a;
            a = b;
            b = temp;
        }
        b = b - a;
    }
    return a << shift;
}
int main()
{
    long long A, B;
    scanf("%lld %lld", &A, &B);
 printf("%lld", binaryGCD(A, B));
    return 0;
}
