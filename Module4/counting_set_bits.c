#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned long long n;
    int count = 0;
    scanf("%llu", &n);
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    printf("%d", count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
