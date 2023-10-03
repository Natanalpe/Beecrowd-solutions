abas, acoes = map(int, input().split(' '))

for x in range(acoes):
    acao = input()
    if acao[0] == 'f':
        abas += 1
    else:
        abas -= 1
print(abas)