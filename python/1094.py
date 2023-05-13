testes=int(input())
total=0
coelhos=0
ratos=0
sapos=0

for x in range(1,testes+1):
    currentTest=input().split(' ')
    currentQuant=int(currentTest[0])
    currentType=str(currentTest[1])
    
    total=total+currentQuant
    if currentType == 'R':
        ratos=ratos+currentQuant
    elif currentType == 'S':
        sapos=sapos+currentQuant
    else:
        coelhos=coelhos+currentQuant
    
percCoelho= '{:.2f}'.format((100 * coelhos)/total)
percRato= '{:.2f}'.format((100 * ratos)/total)
percSapo= '{:.2f}'.format((100 * sapos)/total)

print('Total: '+str(total)+' cobaias')
print('Total de coelhos: '+str(coelhos))
print('Total de ratos: '+str(ratos))
print('Total de sapos: '+str(sapos))
print('Percentual de coelhos: '+str(percCoelho)+' %')
print('Percentual de ratos: '+str(percRato)+' %')
print('Percentual de sapos: '+str(percSapo)+' %')