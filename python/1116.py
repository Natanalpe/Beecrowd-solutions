q=int(input())
for x in range(1,q+1):
    x,y=[int(el) for el in input().strip().split(' ')]
    if y==0:
        print("divisao impossivel")
    else:
        c=x/y
        print('{:.1f}'.format(c))