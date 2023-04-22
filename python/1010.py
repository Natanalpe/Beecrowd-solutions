l1 = input().split(' ')
l2 = input().split(' ')
t1 = int(l1[1]) * float(l1[2])
t2 = int(l2[1]) * float(l2[2])
total = t1 + t2
print("VALOR A PAGAR: R$", '{:.2f}'.format(total))