while True:
    try:
        vls=input().split(' ')
        x=int(vls[0])
        y=int(vls[1])
        if x>y:
            print('Decrescente')
        elif x<y:
            print('Crescente')
    except EOFError:
        break