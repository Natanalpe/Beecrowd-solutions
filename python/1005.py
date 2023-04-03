a = None
b = None

def read_numeric():
  try:
    # read for Python 2.x
    return float(raw_input())
  except NameError:
    # read for Python 3.x
    return float(input())


a = read_numeric()
b = read_numeric()

print(str("MEDIA = ") + str("{:0.5f}".format(((a * 3.5 + b * 7.5) / 11))))