tipo = int(input())
escolhas = [int(x) for x in input().strip().split(' ')]

corretos = sum([1 for x in escolhas if x == tipo])

print(corretos)