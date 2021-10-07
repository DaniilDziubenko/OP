import math
s=0
n=int(input("Enter variable N: "))
for i in range(n):
    b=i+1
    a=math.factorial(b)
    s=s+(1/a)
print("Variable S = ",s)