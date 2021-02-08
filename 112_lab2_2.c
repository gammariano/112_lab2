#include<stdio.h>
int main()
{
    char promo;
    float time,a=199.00,b=299.00;
    scanf("%c" ,&promo);
    scanf("%f" ,&time);
    if(promo=='A')
    {
        if(time>200)
        {
            a+=((time-200)*3);
            printf("%.2f",a);
        }
    }
    if(promo=='B')
    {
        if(time>400)
        {
            b+=((time-400)*2);
            printf("%.2f",b);
        }
    }
}
