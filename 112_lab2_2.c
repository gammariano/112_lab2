#include<stdio.h>
int main()
{
    int a,b;
    float time,i=0;
    char promo;
    scanf("%c" ,&promo);
    scanf("%f" ,&time);
    a=time;
    b=time*100;
    b%=100;
    if(promo=='A')
    {
        i+=199.00;
        if(time>200)
        {
            a-=200;
            a=(a+((time-200)*3))/60.00;
            printf("%.2f",a);
        }
        else
        {
            printf("%.2f",a);
        }
    }
    if(promo=='B')
    {
        if(time>400)
        {
            b=(b+((time-400)*2))/60.00;
            printf("%.2f",b);
        }
        else
        {
            printf("%.2f",b);
        }
    }
    return 0;
}
