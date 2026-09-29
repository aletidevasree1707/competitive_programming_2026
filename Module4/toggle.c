#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long N;
    int K;

    scanf("%lld %d", &N, &K);

    N = N ^ (1LL << K);

    printf("%lld", N);

    return 0;
}
