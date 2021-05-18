x = int(input())

f = 1
if x == 1: f = 0

for i in range(x//2):
	if i == 0: continue
	if x % (i+1) == 0:
		f = 0
		break;
		
if f == 0: print("No")
else : print("Yes")