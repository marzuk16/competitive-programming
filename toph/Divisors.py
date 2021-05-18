import math

def sol():
	n = int(input())
	div = [0]
	for i in range(int(math.sqrt(n))) :
		#print("inside for loop")
		if (n%(i+1)) == 0:
			#print("i: ", i+1)
			div.append(i+1)
			tmp = n//(i+1)
			if(tmp != (i+1)): div.append(tmp)
	
	#print("len of div: ", len(div))
	div.sort()
	for i in range(len(div)) :
		if i == 0: continue
		else :
			print(div[i])
	
sol()