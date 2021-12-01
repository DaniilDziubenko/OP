from random import randint

def maxmin(arr, n):
    max = arr[0] 
    min = arr[0]
    iMax = 0
    iMin = 0
    for i in range(n):
        if max < arr[i]:
            max = arr[i]
            iMax = i
        if min > arr[i]:
            min = arr[i]
            iMin = i
    b = arr[iMax]
    arr[iMax] = arr[iMin]
    arr[iMin] = b
    for i in range(n):
        print(arr[i], end = ' ')

n = int(input('Enter variable N: '))
arr = []
for i in range(n):
    arr.append(randint(-100,100))
    print(arr[i], end = ' ')
print('\n')
maxmin(arr, n)
print('\n')
input('Press enter...')