import math;

def factorial(val):
    if (val == 0):
        return 1
    return val * factorial(val-1)

def combinations(n,r):
    return factorial(n)/(factorial(r)*factorial(abs(n-r)))

count = 0
for i in range(1, 101):
    print(i)
    for j in range(1, i+1):
        if (combinations(i, j) > 1000000):
            count += 1

print(count)