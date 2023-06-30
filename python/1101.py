b=0
s=0
nums=''
soma=0
for x in range(1,999):
    nums=''
    soma=0
    lines=input().split(' ')
    if int(lines[0])<=0 or int(lines[1])<=0:
        break
    else:
        if lines[0]>lines[1]:
            b=int(lines[0])
            s=int(lines[1])
        else:
            b=int(lines[1])
            s=int(lines[0])
        for j in range(s,b+1):
            nums+=str(j)+' '
            soma+=j
    print(nums+'Sum='+str(soma))