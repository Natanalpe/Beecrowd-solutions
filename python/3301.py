i=input().split(" ")
h=int(i[0])
z=int(i[1])
l=int(i[2])

if (h > z and h < l) or (h < z and h > l):
    print("huguinho")
elif (z > h and z < l) or (z < h and z > l):
    print("zezinho")
else:
    print("luisinho")