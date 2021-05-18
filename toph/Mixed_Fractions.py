def sol(i, j):
	if not(i%j):
		print(i//j)
	else :
		a = i//j
		b = i - (a*j)
		
		print(a, " ", b, " ", j)

def main():
	x = input()
	y = x.split()
	
	tmp1 = int(y[0])
	tmp2 = int(y[1])
	sol(tmp1, tmp2)

main()