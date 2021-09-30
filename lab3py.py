import math
a = int(input("Enter variable A: "))
x = int(input("Enter variable X: "))
e = int(input("Enter variable E: "))

y0 = float
y1 = float
y1 = a

while True:
    y0=y1
    y1=0.5*(y0+(x/y0))
    if abs(y1*y1-y0*y0)<e:
        break
print("Y[n] =",y1)