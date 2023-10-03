while True:
    try:
        l = input().strip()
        
        if l == "xxL":
            print("Esse eh o meu lugar")
        else:
            print("Oi, Leonard")
    except EOFError:
        break