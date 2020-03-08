import math

sum = 0
for a in range(1, 101):
    print(a)
    for b in range(1, 101):
        val = str(a ** b)
        count = 0
        for i in range(len(val)):
            count += int(val[i])
        
        if (count > sum):
            sum = count

print(sum)
        
