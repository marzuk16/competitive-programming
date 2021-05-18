import math

def isPrime(n):
    if n == 1:
        return False

    UB = int(math.sqrt(n))
    while(UB > 1):
        if (not(n%UB)) or (not(n%int((n/UB)))):
            return False
        UB -= 1
        
    return True

def sol():
    n = int(input())

    if isPrime(n): print("NO PUNISHMENT")
    else:
        while n:
            print("I DID NOT DO THE ASSIGNMENT.")
            n -= 1

sol()