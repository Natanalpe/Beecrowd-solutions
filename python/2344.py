n = int(input())

if n < 101 and n > 85:
    r = 'A'
elif n < 86 and n > 60:
    r = 'B'
elif n < 61 and n > 35:
    r = 'C'
elif n < 36 and n > 0:
    r = 'D'
else:
    r = 'E'
    
print(r)