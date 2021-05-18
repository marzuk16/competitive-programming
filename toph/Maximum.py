def mx(i, j):
	if i>j: return i
	else: return j
	
def main():
	x = int(input())
	x = input()
	y = x.split()
	c = 0
	
	for i in y:
		c = mx(c, int(i))

	print(c)

main()