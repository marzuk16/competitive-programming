def sol(x):
    cnt = 0

    #conditions = ["a", "A", "e", "E", "i", "I", "o", "O", "u", "U"]

    for tmp in x:
        #print(tmp)
        if (tmp == "a") or (tmp == "A") or (tmp == "e") or (tmp == "E") or (tmp == "i") or (tmp == "I") or (tmp == "o") or (tmp == "O") or (tmp == "u") or (tmp == "U"):
            cnt += 1
            #print(cnt)

    return cnt


def main():
    x =input()

    print(sol(x))

main()