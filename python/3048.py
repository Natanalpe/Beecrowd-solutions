b = 3
total = 0
n = int(input())

for x in range(n):
    a = int(input())
    
    if b != a:
        b = a
        total += 1

print(total)