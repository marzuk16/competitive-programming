t = int(input())

for i in range(t):
	x = input().split()
	a = int(x[0])
	b = int(x[1])
	
	r = (a+b)//2
	
	if not r%2: print("Sadia will be happy.")
	else: print("Oops!")
		