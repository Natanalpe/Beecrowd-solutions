n = int(input())
total = 0

for x in range(n):
    t, v = map(int, input().split(' '))
    total += t * v
    
print(total)