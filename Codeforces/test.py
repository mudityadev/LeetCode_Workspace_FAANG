for _ in range(int(input())):
    track = True
    l  = list(map(int,input().split()))

    if(l[2]+l[0]>=l[3]):
        if(l[0]<l[3]):
            if(l[2]+l[0]-l[3]+l[1]-l[4]>=0):
                track = False
        elif(l[2]+l[1]-l[4]>=0):
            track = False
    if(track):
        print('NO')
    else:
        print('yes')