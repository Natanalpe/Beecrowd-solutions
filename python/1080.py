b=0
curre=0
idx=0
for x in range(1,101):
    curre=int(input())
    if curre > b:
        b=curre
        idx=x
print(b)
print(idx)