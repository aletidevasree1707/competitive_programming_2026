# Enter your code here. Read input from STDIN. Print output to STDOUT
def gcd(a,b):
    if a==0:
        return b
    else:
        return gcd(b%a,a)
A, B, T = map(int, input().split())
g=gcd(A,B)
if T<=max(A,B) and T%g==0:
    print("YES")
else:
    print("NO")
