n = int(input())

if n == 0:
    raiz = 3.0
    print('{:.10f}'.format(raiz))
else:
    raiz = 6.0
    for num in range(n - 1):
        raiz = 6 + 1 / raiz
    raiz = 3 + 1 / raiz
    print('{:.10f}'.format(raiz))