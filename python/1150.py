count = 1
a = int(input())
sm = a

while True:
    try:
        b = int(input())
        if b > a:
            break
    except EOFERROR:
        break
    
while sm < b:
    sm += a + count
    count += + 1
    
print(count)