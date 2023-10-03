n = int(input())
total = 0
valor = 0

for x in range(n):
    p, q = map(int, input().split(' '))
    
    match p:
        case 1001:
            valor = 1.5
        case 1002:
            valor = 2.5
        case 1003:
            valor = 3.5
        case 1004:
            valor = 4.5
        case 1005:
            valor = 5.5
    total += valor * q

print('{:.2f}'.format(total))