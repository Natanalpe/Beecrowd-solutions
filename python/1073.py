import math
a=int(input())
c=0
for x in range(1,a+1):
    if x%2 == 0:
        c=math.pow(x,2)
        print(str(x)+"^2 = "+str("{:.0f}".format(c)))