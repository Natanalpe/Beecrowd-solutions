p1, c1, p2, c2 = map(int, input().split(' '))
calc = p1 * c1 == p2 * c2;

if (p1 * c1 == p2 * c2):
    print(0)
elif p1 * c1 > p2 * c2:
    print(-1)
else:
    print(1)