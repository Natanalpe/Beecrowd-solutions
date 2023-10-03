n, init = map(int, input().split(' '))
lowest_value = []

for x in range(n):
    dh = int(input())
    init += dh
    
    lowest_value.append(init)

print(min(lowest_value))