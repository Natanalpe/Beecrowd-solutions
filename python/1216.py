sm = 0
count = 0

while True:
    try:
        trash_string = input()
        n = int(input())

        sm += n
        count += 1
        
    except EOFError:
        break

media = sm / count

print('{:.1f}'.format(media))