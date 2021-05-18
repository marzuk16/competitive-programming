def sol():
	x = input()
	sz = len(x)//2
	
	i = 0
	j = len(x)-1
	while i < sz:
		if x[i] != x[j]:
			print("No")
			return
		i += 1
		j -= 1
	print("Yes")
	
sol()