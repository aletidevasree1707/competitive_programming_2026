n = int(input())
a = list(map(int, input().split()))

total = sum(a)
min_diff = float('inf')

def find(i, count, total_sum):
    global min_diff

    if i == n:
        if abs(count - (n - count)) <= 1:
            diff = abs(total_sum - (total - total_sum))
            if diff < min_diff:
                min_diff = diff
        return

    find(i + 1, count + 1, total_sum + a[i])
    find(i + 1, count, total_sum)

find(0, 0, 0)

print(min_diff)
