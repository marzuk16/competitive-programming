s = int(input())
x = input()
y = x.split()
c = 0

for i in y:
	c += int(i)

print(s-c)