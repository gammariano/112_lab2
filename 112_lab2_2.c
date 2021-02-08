#include<stdio.h>
int main()
{
    char promo;
    float time,a=199.00,b=299.00,a2,b2;
    scanf("%c" ,&promo);
    scanf("%f" ,&time);
    if(promo=='A')
    {
        if(time>200)
        {
            a2=a+((time-200)*3);
            printf("%.2f",a2);
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
            b2=b+((time-400)*2);
            printf("%.2f",b2);
        }
        else
        {
            printf("%.2f",b);
        }
    }
    return 0;
}
