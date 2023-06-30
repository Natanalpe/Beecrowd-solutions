while True:
    x,y=[int(el) for el in input().strip().split(' ')]
    if x==0 or y==0:
        break
    
    if x>0:
        if y>0:
            print("primeiro")
        else:
            print("quarto")
    elif y>0:
        print("segundo")
    else:
        print("terceiro")