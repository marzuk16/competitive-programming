def doEqual(s, cnt):
	tmp = ""
	
	for i in range(cnt):
		tmp += "0"
		
	tmp += s
	
	return tmp

def sol(x, y):
	res, cnt, carry = "", len(x)-1, 0
	
	while cnt >= 0:
		tmp = int(x[cnt]) + int(y[cnt]) + carry
		carry = 0
		if tmp > 9:
			tmp %= 10
			carry = 1
			
		res += str(tmp)
		cnt -= 1
		
	if carry : res += str(carry)
		
	return res[::-1] #reverse string
	
	
def main():
	tmp = input()
	tmp = tmp.split()

	x = tmp[0]
	y = tmp[1]
	
	if len(x) < len(y):
		cnt = len(y) - len(x)
		x = doEqual(x, cnt)
		
	if len(y) < len(x):
		cnt = len(x) - len(y)
		y = doEqual(y, cnt)
		
	#print(x)
	#print(y)
	
	print(sol(x, y))
	
main()