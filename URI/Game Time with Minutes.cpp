#include <cstdio>
#include <algorithm>
 
using namespace std;
 
int main(int argc, char **argv){
 
    int starth,startm,endh,endm;
    int hour,minutes;
    scanf("%d%d%d%d",&starth,&startm,&endh,&endm);
 
    if (endh <= starth){
        minutes = 60 - startm + endm;
        hour = (24 - (starth+1) + endh) ;
            if (minutes >= 60) {
                hour++; 
                minutes = minutes - 60;
            }
 
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minutes);
    }
 
    else {
             
        minutes = 60 - startm + endm;
        hour = endh-(starth+1);
            if (minutes >= 60) {
                hour++; 
                minutes = minutes - 60;
            }
 
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minutes);    
    }
 
    return 0;
}
