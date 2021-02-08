#include<stdio.h>
int main()
{
    float time,a=199.00,b=299.00;
    char promo;
    scanf("%c" ,&promo);
    scanf("%f" ,&time);
    if(promo=='A')
    {
        if(time>200)
        {
            a=(a+((time-200)*3))+0.40;
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
            b=(b+((time-400)*2))+0.40;
            printf("%.2f",b);
        }
        else
        {
            printf("%.2f",b);
        }
    }
    return 0;
}
