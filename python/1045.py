i=input().split(' ')
inputs=[float(i[0]),float(i[1]),float(i[2])]
inputs.sort()
a=inputs[2]
b=inputs[1]
c=inputs[0]

if a>=(b+c):
    print("NAO FORMA TRIANGULO")
else:
    if a**2 == (b**2+c**2):
        print("TRIANGULO RETANGULO")
    if a**2 > (b**2+c**2):
        print("TRIANGULO OBTUSANGULO")
    if a**2 < (b**2+c**2):
        print("TRIANGULO ACUTANGULO")
    if a==b and b==c:
        print("TRIANGULO EQUILATERO")
    if ((a == b and a != c) or (a == c and a!= b) or (b == c and b != a)):
        print("TRIANGULO ISOSCELES")
