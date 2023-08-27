#include <stdio.h>
#include <string.h>

int convertTime(int dia, int hora, int min, int sec){
    return (dia*86400)+(hora*3600)+(min*60)+sec;
}

int main(){
    
    int d1,d2,h1,h2,m1,m2,s1,s2;
    scanf("Dia %d\n",&d1);
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d\n",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    
    int initialTime = convertTime(d1,h1,m1,s1);
    int finalTime = convertTime(d2,h2,m2,s2);
    int finalSecs = finalTime-initialTime;
    
    int days=finalSecs/86400;
    finalSecs%=86400;
    
    int hours=finalSecs/3600;
    finalSecs%=3600;
    
    int minutes=finalSecs/60;
    finalSecs%=60;
    
    printf("%d dia(s)\n",days);
    printf("%d hora(s)\n",hours);
    printf("%d minuto(s)\n",minutes);
    printf("%d segundo(s)\n",finalSecs);
    
    return 0;
}