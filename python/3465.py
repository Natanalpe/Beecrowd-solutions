import math

a, b, c = map(int, input().split(' '))
semiperimetro = (a + b + c) / 2
area = math.sqrt(semiperimetro * (semiperimetro - a) * (semiperimetro - b) * (semiperimetro - c))

print('{:.3f}'.format(area) + " m2")