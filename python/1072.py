i=int(input())
ini=0
outi=0
for x in range(1,i+1):
    v=int(input())
    if v >= 10 and v <=20:
        ini+=1
    else:
        outi+=1
print(str(ini)+" in\n"+str(outi)+" out")