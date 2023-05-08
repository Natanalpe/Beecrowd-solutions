i=input().split(" ")
s=int(i[0])
f=int(i[1])
if s == f:
    print("O JOGO DUROU 24 HORA(S)")
elif s > f:
    print("O JOGO DUROU "+str((24-s)+f)+" HORA(S)")
else:
    print("O JOGO DUROU "+str(f-s)+" HORA(S)")