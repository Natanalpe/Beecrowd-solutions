v=int(input())
for x in range(1,v+1):
    a=int(input())
    if a==0:
        print("NULL")
    else:
        str=''
        if a%2 == 0:
            str="EVEN"
        else:
            str="ODD"
        if a>0:
            str+=" POSITIVE"
        else:
            str+=" NEGATIVE"
        print(str)