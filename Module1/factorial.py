# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys
def factorial(n):
    if n <= 1:
        return 1
    return n * factorial(n - 1)

def main():
    input_data = sys.stdin.read().split()
    if input_data:
        n = int(input_data[0])
        print(factorial(n))

if __name__ == "__main__":
    main()
