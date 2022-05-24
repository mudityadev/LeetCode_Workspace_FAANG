for t in range(int(input())):
    arr_l = int(input())
    ar = list(map(int, input().split()))
    m_l = int(input())
    arr_m = list(map(int, input().split()))
    s = 0
    for item in arr_m:
        s+= item
    s = s%arr_l
    print( ar[s])