#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int match(char *word, char *pattern)
{
    int j = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (isupper(word[i]))
        {
            if (j < strlen(pattern) && word[i] == pattern[j])
                j++;
            else if (j == strlen(pattern))
                return 1;
            else
                return 0;
        }
    }
    return j == strlen(pattern);
}
int compare(const void *a, const void *b)
{
    return strcmp(*(char **)a, *(char **)b);
}
int main()
{
    int n;
    scanf("%d", &n);

    char input[10000];
    scanf("%s", input);

    char *words[100];
    int count = 0;

    char *token = strtok(input, ",");

    while (token != NULL)
    {
        words[count++] = token;
        token = strtok(NULL, ",");
    }

    char pattern[101];
    scanf("%s", pattern);

    char *answer[100];
    int ans = 0;

    for (int i = 0; i < count; i++)
    {
        if (match(words[i], pattern))
            answer[ans++] = words[i];
    }

    qsort(answer, ans, sizeof(char *), compare);

    if (ans == 0)
    {
        printf("No match found\n");
    }
    else
    {
        for (int i = 0; i < ans; i++)
            printf("%s\n", answer[i]);
    }

    return 0;
}
