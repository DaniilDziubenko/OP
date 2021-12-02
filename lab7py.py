from random import randint

def max(arr, n):
    max = arr[0] 
    iMax = 0
    for i in range(n):
        if max < arr[i]:
            max = arr[i]
            iMax = i
    return iMax

def min(arr, n):
    min = arr[0] 
    iMin = 0
    for i in range(n):
        if min > arr[i]:
            min = arr[i]
            iMin = i
    return iMin

def swapMinMax(arr, n, iMax, iMin):
    b = arr[iMax]
    arr[iMax] = arr[iMin]
    arr[iMin] = b

n = int(input('Enter variable N: '))
arr = []
for i in range(n):
    arr.append(randint(-100,100))
    print(arr[i], end = ' ')
print('\n')
iMax = max(arr, n)
iMin = min(arr, n)
swapMinMax(arr, n, iMax, iMin)
for i in range(n):
    print(arr[i], end = ' ')
print('\n')
input('Press enter...')