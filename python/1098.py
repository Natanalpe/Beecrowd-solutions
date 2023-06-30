import math
i=0
ch=0
s=0

def convertNum(num):
    if num - int(num) == 0:
        return int(num)
    elif num == 1.9999999999999998:
        return math.ceil(num)
    else:
        return '{:.1f}'.format(float(num))

while ch <= 2:
    for j in range(1,4):
        print("I="+str(convertNum(i+s))+" J="+str(convertNum(j+s)))
    s+=0.2
    ch+=0.2