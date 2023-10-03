import math
n = int(input())

for x in range(n):
    PA, PB, GA, GB = input().strip().split(' ')
    
    PA = int(PA)
    PB = int(PB)
    GA = float(GA) / 100
    GB = float(GB) / 100

    anos = 0

    while PA <= PB and anos < 101:
        PA += math.floor(PA * GA)
        PB += math.floor(PB * GB)
        anos += 1

    if anos > 100:
        print("Mais de 1 seculo.")
    else:
        print(anos, "anos.")
