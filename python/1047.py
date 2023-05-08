import math
i=input().split(' ')
h1=int(i[0])
m1=int(i[1])
h2=int(i[2])
m2=int(i[3])

s=m1+h1*60
f=m2+h2*60
if f<=s:
    f+=24*60
c1=(f-s)/60
c2=(f-s)%60
print("O JOGO DUROU "+str(math.floor(c1))+" HORA(S) E "+str(c2)+" MINUTO(S)")