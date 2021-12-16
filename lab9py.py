import math

def countSpace(str, length):  
    count = 0; k = 0
    string = list(str)
    string = ''.join(string)
    if string.find(' ')>=0 and string.find(' ')<=60:
        for i in range(len(str)):
            if str[i] == ' ':
                k+=1
        posSpace = [0]*k
        k = 0
        for i in range(len(str)-1):
            if str[i] == ' ':
                posSpace[k] = i
                k+=1
        n = math.floor((60-length)/k)
        s = list(str)
        j = 0
        for i in range(k):
            s.insert(posSpace[i]+j, ' '*n)
            j+=1
            count+=n
        print("Result:", ''.join(s))
        return count
    else:
        print("Result:", str)
        return 0

str = input('Enter string of symbols: ')
count = countSpace(str, len(str))
print('Number of aded spaces: ', count)