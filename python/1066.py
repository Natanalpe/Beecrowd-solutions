pos=0
neg=0
imp=0
par=0
a=0
for x in range(5):
    a=int(input())
    if a%2 == 0 or a == 0:
        par+=1
    else:
        imp+=1
    if a>0: pos+=1
    if a<0: neg+=1
print(str(par)+" valor(es) par(es)")
print(str(imp)+" valor(es) impar(es)")
print(str(pos)+" valor(es) positivo(s)")
print(str(neg)+" valor(es) negativo(s)")