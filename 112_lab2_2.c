#include<stdio.h>
int main()
{
    char promo;
    float time,a=199,b=299,i,sec;
    scanf("%c" ,&promo);
    scanf("%.2f" ,&time);
    if(promo=='A')
    {
        if(time<=200)
        {
            printf("%.2f" ,a);
        }
        else if(time>200)
        {
            time-=200;
            sec=time*60;
            i=sec*(3.00/60.00);
            a+=i;

        }
    }
}
