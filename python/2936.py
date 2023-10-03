total = 225
gramas = [300, 1500, 600, 1000, 150]

for x in range(5):
    p = int(input())
    total += p * gramas[x]
    
print(total)