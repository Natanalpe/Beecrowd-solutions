import math
iv=int(input())
years=math.floor(iv/365)
month=math.floor((iv-years*365)/30)
days=iv-(years*365+month*30)
print(years,'ano(s)')
print(month,'mes(es)')
print(days,'dia(s)')