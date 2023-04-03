a = None
b = None
soma = None

def read_integer():
  try:
    # read for Python 2.x
    return int(raw_input())
  except NameError:
    # read for Python 3.x
    return int(input())


a = read_integer()
b = read_integer()
soma = a + b
print(str("SOMA = ") + str(soma))