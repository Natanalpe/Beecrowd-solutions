import math

line1=input().split(" ")
line2=input().split(" ")
line3=input().split(" ")
line4=input().split(" ")
dia1=int(line1[1])
dia2=int(line3[1])
hora1=int(line2[0])
hora2=int(line4[0])
minuto1=int(line2[2])
minuto2=int(line4[2])
segundo1=int(line2[4])
segundo2=int(line4[4])

def convertTime(d,h,m,s):
    return (d*86400)+(h*3600)+(m*60)+s

initial=convertTime(dia1,hora1,minuto1,segundo1)
final=convertTime(dia2,hora2,minuto2,segundo2)
toSec=final-initial

dias=toSec/86400
toSec%=86400
horas=toSec/3600
toSec%=3600
minutos=toSec/60
toSec%=60
segundos=toSec

print(str(math.floor(dias))+ ' dia(s)')
print(str(math.floor(horas))+ ' hora(s)')
print(str(math.floor(minutos))+ ' minuto(s)')
print(str(segundos)+ ' segundo(s)')