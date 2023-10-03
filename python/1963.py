antigo, novo = map(float, input().split(' '))
percent = str('{:.2f}'.format((novo / antigo) * 100 - 100))

print(percent + "%")