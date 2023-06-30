q=int(input())
soma=0

for x in range(0,q):
    soma=0
    spl=input().split(' ')
    x=int(spl[0])
    y=int(spl[1])
    if x>y:
        b=x
        s=y
    else:
        b=y
        s=x
    for i in range(s+1,b):
        if i%2 == 1:
            soma+=i
    print(soma)