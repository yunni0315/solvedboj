H, M = map(int,input().split())

if M < 45:
    if H < 1:
        #do 
        print('23', M - 45 + 60)
    else:
        #do
        print(H - 1, M - 45 + 60)
else:
    #do
    print(H, M - 45)