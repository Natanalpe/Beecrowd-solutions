from numbers import Number
import math

a = None
calc = None
pi = None

def read_numeric():
  try:
    # read for Python 2.x
    return float(raw_input())
  except NameError:
    # read for Python 3.x
    return float(input())


a = read_numeric()
pi = (pi if isinstance(pi, Number) else 0) + 3.14159
calc = "{:0.4f}".format((pi * (math.pow(a, 2))))
print(str("A=") + str(calc))