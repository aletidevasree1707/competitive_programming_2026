#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    printf("%d", (n >> k) & 1);
    return 0;
}
