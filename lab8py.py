from random import randint

def createArray(arr, n):
    for i in range(n):
        for j in range(n):
            arr[i][j] = randint(-100,100)

def printArray(arr, n):
    for i in range(n):
        for j in range(n):
            print('{:4d}'.format(arr[i][j]), end = ' ')
        print()

def sumElements(arr, n):
    sum = 0
    for i in range(n):
        for j in range(i+1,n):
            sum += arr[i][j]
    return sum

def printNewArray(arr, n, s):
    for i in range(n):
        for j in range(n):
            if arr[i][j]<0:
                print('{:4d}'.format(s), end = ' ')
            else:
                print('{:4d}'.format(arr[i][j]), end = ' ')
        print()

n = int(input("Enter variable N: "))
arr1 = [0]*n
arr2 = [0]*n
arr3 = [0]*n
for i in range(n):
    arr1[i] = [0] * n
    arr2[i] = [0] * n
    arr3[i] = [0] * n

createArray(arr1, n)
createArray(arr2, n)
createArray(arr3, n)

print("Array 1: ")
printArray(arr1, n)
print("Array 2: ")
printArray(arr2, n)
print("Array 3: ")
printArray(arr3, n)

sum1 = sumElements(arr1, n)
sum2 = sumElements(arr2, n)
sum3 = sumElements(arr3, n)

if sum1>=sum2 and sum1>=sum3:
    print("Array 1 has the largest sum of elements, which are above the main diagonal, and it = ", sum1)
    print("New Array 1: ")
    printNewArray(arr1, n, sum1)
elif sum2>sum1 and sum2>sum3:
    print("Array 2 has the largest sum of elements, which are above the main diagonal, and it = ", sum2)
    print("New Array 2: ")
    printNewArray(arr2, n, sum2)
elif sum3>sum1 and sum3>sum2:
    print("Array 3 has the largest sum of elements, which are above the main diagonal, and it = ", sum3)
    print("New Array 3: ")
    printNewArray(arr3, n, sum3)