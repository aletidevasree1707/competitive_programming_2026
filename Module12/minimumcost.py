#include <stdio.h>
#include <stdlib.h>

int main()
{
    int V, N;
    scanf("%d %d", &V, &N);

    int coin[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &coin[i]);

    int *dp = malloc((V + 1) * sizeof(int));

    for (int i = 0; i <= V; i++)
        dp[i] = 1000000;

    dp[0] = 0;

    for (int i = 1; i <= V; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (coin[j] <= i)
            {
                if (dp[i - coin[j]] + 1 < dp[i])
                {
                    dp[i] = dp[i - coin[j]] + 1;
                }
            }
        }
    }

    if (dp[V] == 1000000)
        printf("-1\n");
    else
        printf("%d\n", dp[V]);

    free(dp);

    return 0;
}
