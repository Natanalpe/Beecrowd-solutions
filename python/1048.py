s=float(input())
sf=s
pc=0
if s >= 0 and s <= 400:
    sf+= s*0.15
    pc=15
elif s >= 400.01 and s <= 800:
    sf+= s*0.12
    pc=12
elif s >= 800.01and s <= 1200:
    sf+= s*0.1
    pc=10
elif s >= 1200.01 and s <= 2000:
    sf+= s*0.07
    pc=7
elif s > 2000:
    sf+= s*0.04
    pc=4
    
rg=sf-s

print("Novo salario: "+str('{:.2f}'.format(sf)))
print("Reajuste ganho: "+str('{:.2f}'.format(rg)))
print("Em percentual: "+str(pc)+" %")