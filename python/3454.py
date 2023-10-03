tabuleiro = input()

if tabuleiro == "XXO" or tabuleiro == "OXX":
    print("Alice")
elif tabuleiro == "XOX":
    print("*")
else:
    print("?")