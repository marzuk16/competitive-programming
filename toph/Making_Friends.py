n = int(input())

def sol():
	cnt = 0
	for i in range(n):
		if i == 0: continue
		if n%i == 0:
			cnt += 1
	
	print(cnt)
	
sol()