l=int(input())
cem=0
cinquenta=0
vinte=0
dez=0
cinco=0
dois=0
um=0
print(l)
while l>=1:
     if l>=100:
          cem+=1
          l-=100
     elif l>=50:
          cinquenta+=1
          l-=50
     elif l>=20:
          vinte+=1
          l-=20
     elif l>=10:
          dez+=1
          l-=10
     elif l>=5:
          cinco+=1
          l-=5
     elif l>=2:
          dois+=1
          l-=2
     elif l>=1:
          um+=1
          l-=1
print(cem,"nota(s) de R$ 100,00")
print(cinquenta,"nota(s) de R$ 50,00")
print(vinte,"nota(s) de R$ 20,00")
print(dez,"nota(s) de R$ 10,00")
print(cinco,"nota(s) de R$ 5,00")
print(dois,"nota(s) de R$ 2,00")
print(um,"nota(s) de R$ 1,00")