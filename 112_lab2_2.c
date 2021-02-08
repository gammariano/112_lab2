#include<stdio.h>
int main()
{
    char promo;
    float time,a=199.00,b=299.00,i,sec;
    scanf("%c" ,&promo);
    scanf("%f" ,&time);
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
            printf("%.2f",a);
        }
    }
    if(promo=='B')
    {
        if(time<=400)
        {
            printf("%.2f" ,b);
        }
        else if(time>400)
        {
            time-=400;
            sec=time*60;
            i=sec*(2.00/60.00);
            b+=i;
            printf("%.2f",b);
        }
    }
}
