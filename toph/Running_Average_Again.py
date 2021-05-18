def avg(sum, cnt):
	print(sum/cnt)

def main():
	n = int(input())
	tmp = input()
	tmp = tmp.split()
	
	sum = 0
	cnt = 0
	
	for i in tmp:
		sum += int(i)
		cnt += 1
		avg(sum, cnt)
	
main()