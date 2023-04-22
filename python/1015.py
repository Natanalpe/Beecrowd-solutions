import math
xy1=input().split(' ')
xy2=input().split(' ')
x1=float(xy1[0])
x2=float(xy2[0])
y1=float(xy1[1])
y2=float(xy2[1])
c='{:.4f}'.format(math.sqrt(((x2 - x1) ** 2) + ((y2 - y1) ** 2)))
print(c)