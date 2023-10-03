import math

n = int(input())

fibonacci = (math.pow((1 + math.sqrt(5)) / 2, n) - math.pow((1 - math.sqrt(5)) / 2.0, n)) / math.sqrt(5);
print('{:.1f}'.format(fibonacci))