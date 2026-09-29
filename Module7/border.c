#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[100001];
    scanf("%s", s);
    int n = strlen(s);
    int found = 0;
    for (int len = n - 1; len >= 1; len--)
    {
        int same = 1;
        for (int i = 0; i < len; i++)
        {
            if (s[i] != s[n - len + i])
            {
                same = 0;
                break;
            }
        }
        if (same)
        {
           for (int i = 0; i < len; i++)
            {
                printf("%c", s[i]);
            }
            printf("\n");
            found = 1;
            break;
        }
    }
    if (!found)
        printf("No border\n");
    return 0;
}
