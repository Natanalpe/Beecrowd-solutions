#include <stdio.h>
#include <math.h>

int main() {
    double input;
    scanf("%lf",&input);
    int cem,cinquenta,vinte,dez,cinco,dois,um,mcinquenta,mvintecinto,mdez,mcinco,mum;
    printf("NOTAS:\n");
    cem=floor(input/100);
    input-=cem*100;
    printf("%d nota(s) de R$ 100.00\n",cem);
    cinquenta=floor(input/50);
    input-=cinquenta*50;
    printf("%d nota(s) de R$ 50.00\n",cinquenta);
    vinte=floor(input/20);
    input-=vinte*20;
    printf("%d nota(s) de R$ 20.00\n",vinte);
    dez=floor(input/10);
    input-=dez*10;
    printf("%d nota(s) de R$ 10.00\n",dez);
    cinco=floor(input/5);
    input-=cinco*5;
    printf("%d nota(s) de R$ 5.00\n",cinco);
    dois=floor(input/2);
    input-=dois*2;
    printf("%d nota(s) de R$ 2.00\n",dois);
    printf("MOEDAS:\n");
    um=floor(input/1);
    input-=um*1;
    printf("%d moeda(s) de R$ 1.00\n",um);
    mcinquenta=floor(input/0.5);
    input-=mcinquenta*0.5;
    printf("%d moeda(s) de R$ 0.50\n",mcinquenta);
    mvintecinto=floor(input/0.25);
    input-=mvintecinto*0.25;
    printf("%d moeda(s) de R$ 0.25\n",mvintecinto);
    mdez=floor(input/0.1);
    input-=mdez*0.1;
    printf("%d moeda(s) de R$ 0.10\n",mdez);
    mcinco=floor(input/0.05);
    input-=mcinco*0.05;
    printf("%d moeda(s) de R$ 0.05\n",mcinco);
    mum=floor(input/0.01);
    input-=mum*0.01;
    printf("%d moeda(s) de R$ 0.01\n",mum);
    return 0;
}