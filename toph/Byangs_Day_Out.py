def sol(x):
	x = x.split()
	
	a = int(x[0])
	b = int(x[1])
	c = int(x[2])

	conditions = [
		a <= (b+c),
		b <= (a+c),
		c <= (a+b)
	]
	
	if all(conditions) : print("Yes")
	else : print("No")

def main():
	test = int(input())
	while test :
		x = input()
		sol(x)
		test -= 1
		
main()