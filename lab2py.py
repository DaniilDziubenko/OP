X = int(input("Enter X: "))
if X<=-1:
    Y = 1/(X*X)
elif (X>=-1) and (X<=2):
    Y = X*X
else:
    Y = 4
print("Y = ", Y)
