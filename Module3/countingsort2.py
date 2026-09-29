#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countingSort' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def countingSort(arr):
    h = max(arr)
    l = min(arr)

    temp = [0] * (h + 1)
    aux = [0] * (h + 1)

    for i in arr:
        temp[i] += 1
    aux[0] = temp[0]
    for i in range(1, h + 1):
        aux[i] = temp[i] + aux[i - 1]

    op = [0] * len(arr)

    for i in range(len(arr) - 1, -1, -1):
        x = arr[i]
        op[aux[x] - 1] = x
        aux[x] -= 1

    return op


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = countingSort(arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
