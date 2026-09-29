#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[100001];
    scanf("%s", s);
    int n = strlen(s);
    for (int p = 1; p <= n; p++)
    {
        int valid = 1;
        for (int i = p; i < n; i++)
        {
            if (s[i] != s[i % p])
            {
                valid = 0;
                break;
            }
        }
        if (valid)
        {
            printf("%d\n", p);
            break;
        }
    }
    return 0;
}
