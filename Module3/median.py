# Enter your code here. Read input from STDIN. Print output to STDOUT
def median(arr1, arr2):
    arr1 = arr1 + arr2   
    arr1.sort()
    n = len(arr1)

    if n % 2 == 0:
        me = (arr1[n//2 - 1] + arr1[n//2]) / 2
    else:
        me = arr1[n//2]

    print(f"{me:.1f}")

x, y = map(int, input().split())
a1 = list(map(int, input().split()))
a2 = list(map(int, input().split()))

median(a1, a2)
