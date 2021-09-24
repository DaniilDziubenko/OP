import math
a = int(input("Enter variable A: "))
x = int(input("Enter variable X: "))
e = int(input("Enter variable E: "))

i = 1
y = []
y.append(a)
y.append(0.5*(y[i-1]+(x/y[i-1])))
while abs(y[i]*y[i]-y[i-1]*y[i-1])>=e:
    i=i+1
    y.append(0.5*(y[i-1]+(x/y[i-1])))
print("Y[",i,"] =",y[i])