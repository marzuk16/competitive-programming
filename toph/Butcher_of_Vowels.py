def main():
    t = int(input())
    #con = ['a', 'e', 'i', 'o', 'u']
    for i in range(t):
        s = input()
        f = 0
        for j in s:
    
            if j == 'a' or j == 'e' or j == 'i' or j == 'o' or j == 'u':
                print("Yes")
                f = 1
                break
        
        if not f:
            print("No")

main()