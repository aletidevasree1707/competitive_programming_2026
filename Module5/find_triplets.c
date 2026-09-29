#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> 

int main() {
    int n, x, found = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
    for (int k = j + 1; k < n; k++) {
    if (a[i] + a[j] + a[k] == x) {
    int p = a[i], q = a[j], r = a[k];
    int temp;
        if (p > q) {
        temp = p; p = q; q = temp;
                    }
        if (p > r) {
        temp = p; p = r; r = temp;
                    }
        if (q > r) {
        temp = q; q = r; r = temp;
                    }
        printf("%d %d %d\n", p, q, r);
        found = 1;
                }}}}
    if (found == 0)
        printf("No Triplet Found");
    return 0;
}
