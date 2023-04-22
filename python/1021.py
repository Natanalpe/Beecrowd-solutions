import math
l=float(input())
mb=[100,50,20,10,5,2]
cn=[1,0.5,0.25,0.10,0.05,0.01]
rest=l*100
print('NOTAS:')
for money in mb:
    qtt=math.floor(rest/(money*100))
    print(str(qtt)+' nota(s) de R$ '+'{:.2f}'.format(money))
    rest%=money*100
print('MOEDAS:')
for coin in cn:
    qtti=math.floor(rest/(coin*100))
    print(str(qtti)+' moeda(s) de R$ '+'{:.2f}'.format(coin))
    rest%=coin*100