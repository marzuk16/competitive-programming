n = eval(input())
res = 1

for i in range(n):
    res *= i+1
    res %= 10000
    
print( res % 10000)