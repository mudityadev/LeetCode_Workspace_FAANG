for _ in range(int(input())):
    n = list(map(int, input()))
    if(len(n)==2):
        print(n[1])
    else:
        print(min(n))