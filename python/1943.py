n = int(input())
r = 0

if n < 101 and n > 50: r = 100
elif n < 51 and n > 25: r = 50
elif n < 26 and n > 10: r = 25
elif n < 11 and n > 5: r = 10
elif n < 6 and n > 3: r = 5
elif n < 4 and n > 1: r = 3
else: r = 1
    
print("Top", r)