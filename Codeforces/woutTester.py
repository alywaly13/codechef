import random

def generatetest(n):
    target = open("generatedtest.txt", 'w')
    arra = []
    arrb = []
    h = random.randint(1, n)
    target.write("TEST STARTS HERE\n")
    target.write("1\n")
    target.write(str(n)+ " " +str(h)+"\n")
    for i in range(0,n):
        a = random.randint(0,n-1)
        b = random.randint(0,n-1)
        if (b<a):
            c = a
            a = b
            b = c
        arra.append(a)
        arrb.append(b)
        target.write( str(a)+ " " + str(b)+"\n")
        if (i%100000==0):
            print "."
    target.write("ANSWER\n" +  str(solvetest(arra,arrb, n, h)))
    target.close()

def solvetest(arra, arrb, n, h):
    gaps = [0] * n
    for i in range(0, n):
        for j in range(arra[i], arrb[i]+1):
            gaps[j] = gaps[j]+1
    maxsum = 0
 #   print gaps
    for i in range(0,n-h+1):
        sm = 0
        for j in range(i, i+h):
            sm += gaps[j]
 #       print sm
        if sm > maxsum:
            maxsum = sm
    return n*h - maxsum
        
arra = [2, 1, 2, 1, 2]
arrb = [3, 2, 3, 2, 3]
n =5
h = 2
