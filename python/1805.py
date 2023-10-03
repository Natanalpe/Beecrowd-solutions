import math

a, b = map(int, input().split(' '))

soma = math.floor(((a + b) * (b - a + 1)) / 2)

print(soma)