x=int(input())
y=int(input())
b=0
s=0
soma=0

if x>y:
    b=x
    s=y
else:
    b=y
    s=x
for i in range(s+1,b):
    if i%2 != 0:
        soma+=i
print(soma)