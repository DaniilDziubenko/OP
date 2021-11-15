def factorial(a):
    if a < 0:
        return 0
    if a == 0:
        return 1
    else:
        return a * factorial(a-1)

def sqrt(p,a,n):
    x0 = 1
    x1 = (1/p)*((p-1)*x0 + a/pow(x0,p-1))
    if n>0:
        for i in range(n):
            x0 = x1
            x1 = (1/p)*((p-1)*x0 + a/pow(x0,p-1))
    return x1

m = int(input('Enter variable m: '))
k = int(input('Enter variable k: '))
n = int(input('Enter variable n: '))
y = factorial(k)/factorial(m)*sqrt(3,pow(k,2),n) - pow(m,2)*sqrt(5,pow(k,3),n)

print('Variable y = ',y)

i = input('')