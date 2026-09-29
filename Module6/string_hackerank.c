#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    scanf("%s", s);
    int n = strlen(s);
    int dp[1000][1000];
    for (int i = 0; i < n; i++)
        dp[i][i] = 1;
    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            if (s[i] == s[j])
            {
                if (len == 2)
                    dp[i][j] = 2;
                else
                    dp[i][j] = dp[i + 1][j - 1] + 2;
            }
            else
            {
                if (dp[i + 1][j] > dp[i][j - 1])
                    dp[i][j] = dp[i + 1][j];
                else
                    dp[i][j] = dp[i][j - 1];
            }
        }
    }
    printf("%d", dp[0][n - 1]);
    return 0;
}
