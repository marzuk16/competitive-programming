x = input().split()
n, x = x[0], x[1]
tmp = input().split()

sum = 0

for i in tmp:
	sum += int(i)
	
if sum > int(x): print("Yes")
else: print("No")