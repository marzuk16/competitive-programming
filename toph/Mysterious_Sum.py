def absDiff(x, y):
    res = x - y
    if res < 0:
        res *= -1

    return res

def sol(x, y) :
    tmp = x+y
    res = str(tmp)

    tmp = absDiff(x, y)
    tmp = str(tmp)

    res += tmp

    return res
    
def main():
    test = int(input())

    for i in range(test):
        x = input().split()
        a = int(x[0])
        b = int(x[1])

        res = sol(a, b)

        pr =   "Case {case}: {ans}".format(case = i+1, ans = res)

        print(pr)

main()