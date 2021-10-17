s1=0
s2=0
for i in range(200,250):
    for j in range(250,300):
        for n in range(1,150):
            if j%n==0:
                s1=s1+n
            if i%n==0:
                s2=s2+n
        if i==s1 and j==s2:
            print(i," and ",j," - friendly numbers")
        s1=0
        s2=0
n=input("Press Enter to continue...")
