musicas = [
    "PROXYCITY",
    "P.Y.N.G.",
    "DNSUEY!",
    "SERVERS",
    "HOST!",
    "CRIPTONIZE",
    "OFFLINE DAY",
    "SALT",
    "ANSWER!",
    "RAR?",
    "WIFI ANTENNAS"
]

n = int(input())

for i in range(n):
    x, y = [int(e) for e in input().strip().split(' ')]
    soma = x + y
    print(musicas[soma])