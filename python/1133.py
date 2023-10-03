x = int(input())
y = int(input())

a = min(x, y) + 1
b = max(x, y)

for i in range(a, b):
    if (i % 5 == 2) or (i % 5 == 3):
        print(i)