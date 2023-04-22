import math
i=int(input())
def ct(num):
    h=math.floor(num/3600)
    m=round(((math.floor(num/60)/60)-math.floor(math.floor(num/60)/60))*60)
    s=round((((num-(h*3600))/60)-m)*60)
    return print(str(h)+':'+str(m)+':'+str(s))
ct(i)