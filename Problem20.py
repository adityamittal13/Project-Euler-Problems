def factorial(n):
    if (n == 1):
        return 1
    
    return n * factorial(n-1)


val = str(factorial(100))

count = 0
for i in range(len(val)):
    count += int(val[i])

print(count)