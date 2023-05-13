import math
v=int(input())
m=pow(v,2)
if m%2 == 0:
    b=m/2
    p=m/2
else:
    b=math.ceil(m / 2)
    p=math.floor(m/2)
print(str(int(b))+" casas brancas e "+str(int(p))+" casas pretas")