a = None
b = None
c = None
d = None

def read_integer():
  try:
    # read for Python 2.x
    return int(raw_input())
  except NameError:
    # read for Python 3.x
    return int(input())


a = read_integer()
b = read_integer()
c = read_integer()
d = read_integer()
print(str("DIFERENCA = ") + str(a * b - c * d))
