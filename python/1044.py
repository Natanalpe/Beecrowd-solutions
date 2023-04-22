l=input().split(' ')
a=int(l[0])
b=int(l[1])
if a%b==0 or b%a==0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")