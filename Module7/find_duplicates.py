# Enter your code here. Read input from STDIN. Print output to STDOUT 
s= input()

seen = 0
dup = 0

for ch in s:
    bit = 1 << (ord(ch) - 97)

    if seen & bit:
        dup |= bit
    else:
        seen |= bit

for ch in s:
    bit = 1 << (ord(ch) - 97)

    if dup & bit:
        print(ch, end=" ")
        dup &= ~bit
