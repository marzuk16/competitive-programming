def sol():
	a = input()
	b = input()
	
	#a.sort()
	#b.sort()
	
	#a = ''.join(sorted(a)) #string sort
	#b = ''.join(sorted(b)) #string sort
	
	if sorted(a) == sorted(b): print("Yes")
	else: print("No")
	
sol()