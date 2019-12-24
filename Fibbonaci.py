arr = []

n = 4000000
i = 0

n0 = 1
n1 = 1

sum1 = 0

while (i < n):
	i = n0 + n1
	if (i % 2 == 0):
		sum1 += i
	n0 = n1
	n1 = i

print(sum1)
