sum2 = None
b = None
a = None

def read_integer():
  try:
    # read for Python 2.x
    return int(raw_input())
  except NameError:
    # read for Python 3.x
    return int(input())


a = read_integer()
b = read_integer()
sum2 = a + b
print(str("X = ") + str(sum2))
