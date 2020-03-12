#include <reg52.h>
sbit led = P1^1;
void main(){
    unsigned char cnt = 0;
    unsigned int i;

    while(1){
        P1 = ~(0x80 >> cnt);
        for(i = 0;i<=30000;i++);
        cnt++;
        if(cnt>8){
            cnt = 0;
        }
    }
}