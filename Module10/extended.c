#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long gcdExtended(long long a, long long b,
                      long long *x, long long *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }
    long long x1, y1;
    long long d = gcdExtended(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;
    return d;
}
int main()
{
    long long A, B;
    long long x, y;
    scanf("%lld %lld", &A, &B);
    long long D = gcdExtended(A, B, &x, &y);
    printf("%lld %lld %lld\n", x, y, D);
    return 0;
}
