v=input().split(' ')
a=float(v[0])
b=float(v[1])
c=float(v[2])
def check(v1,v2,v3):
    calc=v1+v2
    if calc>v3:
        return True
    else:
        return False
abc=check(a,b,c)
acb=check(a,c,b)
bca=check(b,c,a)
area=((a+b)*c)/2
if abc and acb and bca:
    print('Perimetro =','{:.1f}'.format(a+b+c))
else:
    print('Area =','{:.1f}'.format(area))